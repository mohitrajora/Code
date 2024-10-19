from telegram import Update, ChatPermissions
from telegram.ext import ApplicationBuilder, CommandHandler, ContextTypes

# Your actual bot token
API_TOKEN = '7457713709:AAEC90yBkkncM36ydCQ9g6TFOTfrwjz4F2g'

# List of allowed user IDs (replace with actual Telegram user IDs)
allowed_users = [1879409760, 1087968824]  # Replace with actual user IDs

async def start(update: Update, context: ContextTypes.DEFAULT_TYPE):
    user_id = update.message.from_user.id
    chat_id = update.effective_chat.id
    print(f"User ID: {user_id}, Chat ID: {chat_id}")  # For debugging
    if user_id in allowed_users:
        await context.bot.send_message(chat_id=chat_id, text="Welcome to the Railway Science Batch 2024!")
    else:
        await context.bot.send_message(chat_id=chat_id, text=f"You do not have access to this channel. Your user ID is {user_id}")



async def restrict(update: Update, context: ContextTypes.DEFAULT_TYPE):
    chat_id = update.message.chat_id
    user_id = update.message.reply_to_message.from_user.id
    if user_id not in allowed_users:
        await context.bot.restrict_chat_member(chat_id, user_id, ChatPermissions(can_send_messages=False))
        await context.bot.send_message(chat_id, text="User has been restricted from sending messages.")

async def error(update: Update, context: ContextTypes.DEFAULT_TYPE):
    """Log Errors caused by Updates."""
    if update.message:
        chat_id = update.message.chat_id
    else:
        chat_id = 'Unknown'  # Or a default chat ID if you have one
    
    await context.bot.send_message(chat_id=chat_id, text="An error occurred.")


# Create the Application
application = ApplicationBuilder().token(API_TOKEN).build()

# Add command handlers
application.add_handler(CommandHandler('start', start))
application.add_handler(CommandHandler('restrict', restrict))

# Log all errors
application.add_error_handler(error)

# Start the Bot
application.run_polling()
