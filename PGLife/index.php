<?php
session_start();
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Welcome | PG Life</title>
    <?php
    include "includes/head_links.php";
    ?>
    <link rel="stylesheet" href="css/home.css">
</head>

<body>
    
    <?php
    include "includes/header.php";
    ?>

    <div class="banner-container">
        <h2 class="white pb-3">Where Comfort Meets Modernity</h2>
        <form id="search-form" action="property_list.php" method="GET">
            <div class="input-group city-search">
                <input type="text" class="form-control input-city" id="city" name="city" placeholder="Enter your city to search PGs">
                <div class="input-group-append">
                    <button type="submit" class="btn btn-secondary">
                        <i class="fa fa-search"></i>
                    </button>
                </div>
            </div>
        </form>
    </div>
    <div class="page-container">
        <h1 class="city-heading">Major Cities</h1>
        <div class="row">
            <div class="city-card-container col-md">
                <a href="property_list.php?city=Delhi">
                <div class="city-card rounded-circle">
                    <img src="/HTML/PGLife/img/delhi.png" alt="delhi" class="city-img">
                </div>
            </div>
            <div class="city-card-container col-md">
                <a href="property_list.php?city=Mumbai">
                <div class="city-card rounded-circle">
                    <img src="/HTML/PGLife/img/mumbai.png" alt="mumbai" class="city-img">
                </div>
            </div>
            <div class="city-card-container col-md">
                <a href="property_list.php?city=Hyderabad">
                <div class="city-card rounded-circle">
                    <img src="/HTML/PGLife/img/hyderabad.png" alt="hyderabad" class="city-img">
                </div>
            </div>
            <div class="city-card-container col-md">
                <a href="property_list.php?city=Bengaluru">
                <div class="city-card rounded-circle">
                    <img src="/HTML/PGLife/img/bangalore.png" alt="bangalore" class="city-img">
                </div>
            </div>
        </div>
    </div>

    <?php
    include "includes/signup_modal.php";
    include "includes/login_modal.php";
    include "includes/footer.php";
    ?>

</body>
</html>