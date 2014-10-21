<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="description" content="">
    <meta name="author" content="">
    <link rel="shortcut icon" href="/favicon.png">

    <title>Booz Allen Hamilton - Jellyfish</title>

    <!-- Bootstrap -->
    <link href="/sites/all/themes/bootstrap/bah_assets/css/bootstrap.css" rel="stylesheet">
     <link href="/sites/all/themes/bootstrap/bah_assets/css/bootstrap-theme.css" rel="stylesheet">

    <!-- siimple style -->
    <link href="/sites/all/themes/bootstrap/bah_assets/css/style.css" rel="stylesheet">
    
    <!-- HTML5 shim and Respond.js IE8 support of HTML5 elements and media queries -->
    <!--[if lt IE 9]>
      <script src="https://oss.maxcdn.com/libs/html5shiv/3.7.0/html5shiv.js"></script>
      <script src="https://oss.maxcdn.com/libs/respond.js/1.3.0/respond.min.js"></script>
    <![endif]-->
  </head>

  <body>

    <!-- Fixed navbar -->
    <div class="navbar navbar-default navbar-fixed-top">
      <div class="container">
        <div class="navbar-header">
          <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
          </button>
          <a class="navbar-brand" href="/">Booz Allen Hamilton - Jellyfish</a>
        </div>
        <div class="navbar-collapse collapse">
          <ul class="nav navbar-nav navbar-right">
            <li><a href="/user">Your Account</a></li>
            <li><a href="/cart">Your Cart</a></li>
            <?php if ($user->uid): ?>
            <li><a href="/user/logout">Logout</a></li>
            <?php else: ?> 
              <li><a href="/user/login">Login</a></li>
            <?php endif; ?>
          </ul>
        </div><!--/.nav-collapse -->
      </div>
    </div>

  <div id="header">
    <div class="container">

      <div class="row">
        <div class="col-md-8">
          <h1>Cloud Technology made to order. Conveniently delivered.</h1> 
        </div>
        <div class="col-md-4">
          <img src="/sites/all/themes/bootstrap/bah_assets/img/slide1.png" alt=""> 
        </div>
      </div>

      <div class="row">
      <div class="col-md-12">
      <div class="center-block">&nbsp;</div>
      </div>
      </div>

      <div class="row">
        <div class="col-md-12">
          <a href="/user" class="btn btn-theme">Review Service Catalog</a>   
        </div>
      </div>
    
      <div class="row">
      <div class="col-md-12">
      <div class="center-block">&nbsp;</div>
      </div>
      </div>

    </div>
  </div>
  <div id="footer">
  <div class="container">
    <div class="row">
      <div class="col-lg-6 col-lg-offset-3">
          <p class="copyright">Copyright &copy; 2014 Booz Allen Hamilton</p>
      </div>
    </div>    
  </div>  
  </div>

    <script src="https://code.jquery.com/jquery-1.10.2.min.js"></script>
    <script src="/sites/all/themes/bootstrap/bah_assets/js/bootstrap.min.js"></script>
  </body>
</html>
