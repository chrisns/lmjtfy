<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">
    <title>Let Me Confluence That For You!</title>
    <meta name="description" content="">
    <meta name="viewport" content="width=device-width">

    <link href="//netdna.bootstrapcdn.com/twitter-bootstrap/2.3.1/css/bootstrap-combined.min.css" rel="stylesheet">
  </head>
  <body>
    <img id="fake_mouse" src="" style="display:none;position:absolute;z-index:1000;" />
    <div class="container">
      <div class="row">
        <div class="offset4 span4">
          <br/>
          <br/>
          <br/>
          <div class="row">
            Let Me <a href="https://www.atlassian.com/software/confluence"><img style="width:111px;height:53px;" src="https://wac-cdn.atlassian.com/dam/jcr:d6e2d2db-e58a-40f7-9d1a-d6d22a335c96/Confluence-blue.svg?cdnVersion=1363"/></a> That For You!
          </div>

          <div class="row">
            <form id="search" action="https://jira-confluence/dositesearch.action" class="input-append">
              <input type="text" name="searchString" id="search_query"  autocomplete="off">
              <button id="search_button" class="btn" type="button">Go!</button>

              <h5 id="search_url" style="text-decoration:underline;"></h5>
            </form>
          </div>
        </div>
      </div>
    </div>
    <script src="js/plugins.js"></script>
    <script src="//code.jquery.com/jquery-2.0.0.min.js"></script>
    <script src="//netdna.bootstrapcdn.com/twitter-bootstrap/2.3.1/js/bootstrap.min.js"></script>
    <script src="js/vendor/jquery.form.js"></script>
    <script src="js/vendor/underscore.string.min.js"></script>
    <script src="js/vendor/purl.js"></script>
    <script src="js/main.js"></script>
  </body>
</html>
