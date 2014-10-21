<?php

// @todo Rewrite this as a custom Drupal module with a proper page callback

// Bootstrap Drupal
require_once('../drupal_bootstrap.php');

// Get the current user
global $user;

?>
<!doctype html>
<html class="no-js" lang="en">
  <head>
    <meta charset="utf-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Get An Estimate | Booz Allen Hamilton</title>
    <link rel="stylesheet" href="css/foundation.css" />
    <link rel="stylesheet" href="css/app.css" />
    <link rel="stylesheet" href="css/mq.css" />
    <link rel="stylesheet" href="css/animate.css" />
    <!--[if (lte IE 8)&(!IEmobile)]>
    <link rel="stylesheet" media="screen" href="css/nomq.css">
    <![endif]-->
    <!-- Google Font -->
    <link href='http://fonts.googleapis.com/css?family=Open+Sans:400,300,700' rel='stylesheet' type='text/css'>
    <!-- Scripts -->
    <script src="http://ajax.googleapis.com/ajax/libs/jquery/1.11.0/jquery.min.js"></script>
    <script src="js/vendor/modernizr.js"></script>
    <script src="estimator.js"></script>
  </head>

<!-- BODY -->
  
  <body>
    
    <div class="interior-header">
      <div>
        <nav class="utility">
          <ul>
          <?php
            if ($user->uid) {
              print '<li><a href="../user/logout" class="register">Logout</a></li>';
              print '<li><a href="../user" class="login">My Account</a></li>';
            }
            else {
              print '<li><a href="../user/register" class="register">Register</a></li>';
              print '<li><a href="../user" class="login">Login</a></li>';
            }
          ?>
          </ul>
        </nav>
      </div>
      <div>
        <nav class="main">
          <div class="logo"></div>
          <ul>
            <li class="home"><a href="/">Home</a></li>
            <li class="catalog"><a href="/service-catalog">Catalog</a></li>
            <li class="learn"><a href="/learn-more">Learn More</a></li>
            <li class="broker"><a href="/be-provider">Be a Provider</a></li>
            <li class="contact"><a href="contact-us">Contact</a></li>
          </ul>
        </nav>
      </div>
    </div>

    <div class="yellow-hdr">
      <div class="title">
        <h3>Get An Estimate</h3>
      </div>
    </div>

    <section class="estimator">
      <div class="row">
        <!-- <div class="columns"> -->
          <dl class="tabs estTab" data-tab>
            <dd class="active"><a class="panelTab1" href="#panel1-1">Easy Production</a></dd>
            <dd><a class="panelTab2" href="#panel1-2">Easy Cloud</a></dd>
            <dd><a class="panelTab3" href="#panel1-3">Cloud Itemized</a></dd>
            <dd><a class="panelTab4" href="#panel1-4">VM Itemized</a></dd>
            <dd><a class="panelTab5" href="#panel1-5">A La Carte</a></dd>
          </dl>
          
          <!-- CONTENT PANELS -->

          <!-- PANEL 1 -->
          <form method="post" action="" enctype="" id="">

            <div class="tabs-content estContentBlk">
              
              <div class="content active panel1-1Wrap" id="panel1-1">
                <!-- <div class="row"> -->
                  <!-- <div> -->
                    <p class="pWide1">How many concurrent users do you expect for your application at it's peak 
                    utilization?</p>
                    <input type="text" id="p1_concurrent_users" class="estInput" placeholder="0">
                    <p class="pWide2">How many registered users does/will your application have?</p>
                    <input type="text" id="p1_registered_users" class="estInput" placeholder="0">
                  <!-- </div> -->
                  <div class="columns">
                    <button id="btnSubmit" attr="go">Go</button>
                    <br>
                    <button attr="reset">Reset</button>
                  </div>
                <!-- </div> -->
                <table class="estimatorGlobal estGlobalTable-tab1and2">
                  <thead>
                    <tr>
                      <th attr="totals">Totals</th>
                      <th attr="vetFacing">BAH (OLTP)</th>
                      <th attr="contDist">Content Distribution</th>
                      <th attr="dataWare">Data Warehouse</th>
                    </tr>
                  </thead>
                  <tbody>
                    <tr>
                      <td class="firstcol">Labor Charges (initial setup)</td>
                      <td id="lc_vf"></td>
                      <td id="lc_cd"></td>
                      <td id="lc_dw"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Labor Charges (annual recurring)</td>
                      <td id="lca_vf"></td>
                      <td id="lca_cd"></td>
                      <td id="lca_dw"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Virtual Machine Charges</td>
                      <td id ="vmc_vf"></td>
                      <td id ="vmc_cd"></td>
                      <td id ="vmc_dw"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Storage Charges</td>
                      <td id ="sc_vf"></td>
                      <td id ="sc_cd"></td>
                      <td id ="sc_dw"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Enterprise Backups</td>
                      <td id ="eb_vf"></td>
                      <td id ="eb_cd"></td>
                      <td id ="eb_dw"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Enterprise Administration (ATO, C&A, Performance Monitoring, Continuous 
                      Security Monitoring)</td>
                      <td id ="ea_vf"></td>
                      <td id ="ea_cd"></td>
                      <td id ="ea_dw"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Recurring Build, Program and Project Management</td>
                      <td id ="rb_vf"></td>
                      <td id ="rb_cd"></td>
                      <td id ="rb_dw"></td>
                    </tr>
					  <tr>
                      <td><strong>Grand Total</strong></td>
                      <td attr="gTotal"><input attr="gTotal" type="text" id ="toltp"></td>
                      <td attr="gTotal"><input attr="gTotal" type="text" id ="tolcd"></td>
                      <td attr="gTotal"><input attr="gTotal" type="text" id ="toldw"></td>
                    </tr>
                  </tbody>
                </table>
                <div class="grandTotalRow">
                  <p class="gtHdr">Grand Total</p>
                  <label>BAH-Facing (OLTP)</label>
                  <div attr="gTotalRow"><input attr="gTotal" type="text" ></div>
                  <label>Content Distribution</label>
                  <div attr="gTotalRow"><input attr="gTotal" type="text"></div>
                  <label>Data Warehouse</label>
                  <div attr="gTotalRow"><input attr="gTotal" type="text"></div>
                </div>
                <div class="grandTotalRowWide">
                  <p class="gtHdr">Grand Total</p>
                  <div attr="gTotalRow">
                    <label>BAH-Facing (OLTP)</label>
                    <input attr="gTotal" type="text">
                  </div>

                  <div attr="gTotalRow">
                    <label>Content Distribution</label>
                    <input attr="gTotal" type="text">
                  </div>

                  <div attr="gTotalRow">
                    <label>Data Warehouse</label>
                    <input attr="gTotal" type="text">
                  </div>
                </div>
              </div>

              <!-- PANEL 2 -->

              <div class="content panel1-2Wrap" id="panel1-2">
                <div>
                  <div>
                    <p>How many concurrent users do you expect for your application at it's peak utilization?</p>
                    <input type="text" id="p2_concurrent_users" class="estInput" placeholder="0">
                    <p>How many registered users does/will your application have?</p>
                    <input type="text" id="p2_registered_users" class="estInput" placeholder="0">
                  </div>
                  <div class="columns">
                    <button attr="go" id="btnSubmitp2">Go</button>
                    <br>
                    <button attr="reset">Reset</button>
                  </div>
                </div>

                <!-- GOLD TABLE -->

                <span class="label gold">gold level</span>
                <table class="estimatorGlobal estGlobalTable-tab1and2">
                  <thead>
                    <tr>
                      <th attr="totals">Totals</th>
                      <th attr="vetFacing">BAH-Facing (OLTP)</th>
                      <th attr="contDist">Content Distribution</th>
                      <th attr="dataWare">Data Warehouse</th>
                    </tr>
                 </thead>
                  <tbody>
                    <tr>
                      <td class="firstcol">Labor Charges (initial setup)</td>
                      <td id ="gp2_lc_vf"></td>
                      <td id ="gp2_lc_cd"></td>
                      <td id ="gp2_lc_dw"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Labor Charges (annual recurring)</td>
                      <td id ="gp2_lca_vf"></td>
                      <td id ="gp2_lca_cd"></td>
                      <td id ="gp2_lca_dw"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Cloud Service Charges</td>
                      <td id ="gp2_cs_vf"></td>
                      <td id ="gp2_cs_cd"></td>
                      <td id ="gp2_cs_dw"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Non-Replicated Storage Charges</td>
                      <td id ="gp2_nr_vf"></td>
                      <td id ="gp2_nr_cd"></td>
                      <td id ="gp2_nr_dw"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Enterprise Backups</td>
                      <td id ="gp2_eb_vf"></td>
                      <td id ="gp2_eb_cd"></td>
                      <td id ="gp2_eb_dw"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Enterprise Administration Inicidentals*<br><i>*includes Performance 
                      Monitoring and Security Monitoring</i></td>
                      <td id ="gp2_ea_vf"></td>
                      <td id ="gp2_ea_cd"></td>
                      <td id ="gp2_ea_dw"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Recurring Build, Program and Project Management</td>
                      <td id ="gp2_ppm_vf"></td>
                      <td id ="gp2_ppm_cd"></td>
                      <td id ="gp2_ppm_dw"></td>
                    </tr>
                    <tr>
                      <td class="firstcol"><strong>Grand Total</strong></td>
                      <td attr="gTotal"><input attr="gTotal" type="text" id ="gtg1"></td>
                      <td attr="gTotal"><input attr="gTotal" type="text" id ="gtg2"></td>
                      <td attr="gTotal"><input attr="gTotal" type="text" id ="gtg3"></td>
                    </tr>
                  </tbody>
                </table>

                <!-- SILVER TABLE -->

                <span class="label silver">silver level</span>
                <table class="estimatorGlobal estGlobalTable-tab1and2">
                  <thead>
                    <tr>
                      <th attr="totals">Totals</th>
                      <th attr="vetFacing">BAH-Facing (OLTP)</th>
                      <th attr="contDist">Content Distribution</th>
                      <th attr="dataWare">Data Warehouse</th>
                    </tr>
                  </thead>
                  <tbody>
                    <tr>
                      <td class="firstcol">Cloud Service Charges</td>
                      <td id ="sp2_cs_vf"></td>
                      <td id ="sp2_cs_cd"></td>
                      <td id ="sp2_cs_dw"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Non-Replicated Storage Charges</td>
                      <td id ="sp2_nr_vf"></td>
                      <td id ="sp2_nr_cd"></td>
                      <td id ="sp2_nr_dw"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Enterprise Backups</td>
                      <td id ="sp2_eb_vf"></td>
                      <td id ="sp2_eb_cd"></td>
                      <td id ="sp2_eb_dw"></td>
                    </tr>           
                    <tr>
                      <td class="firstcol">Enterprise Administration Incidentals*<br><i>*includes Security Monitoring 
                      only</i></td>
                      <td id ="sp2_ppm_vf"></td>
                      <td id ="sp2_ppm_cd"></td>
                      <td id ="sp2_ppm_dw" ></td>
                    </tr>
                    <tr>
                      <td><strong>Grand Total</strong></td>
                      <td attr="gTotal"><input attr="gTotal" type="text" id ="gts1"></td>
                      <td attr="gTotal"><input attr="gTotal" type="text" id ="gts2"></td>
                      <td attr="gTotal"><input attr="gTotal" type="text" id ="gts3"></td>
                    </tr>
                  </tbody>
                </table>

                <!-- BRONZE TABLE -->

                <span class="label bronze">bronze level</span>
                <table class="estimatorGlobal estGlobalTable-tab1and2">
                  <thead>
                    <tr>
                      <th attr="totals">Totals</th>
                      <th attr="vetFacing">BAH-Facing (OLTP)</th>
                      <th attr="contDist">Content Distribution</th>
                      <th attr="dataWare">Data Warehouse</th>
                    </tr>
                  </thead>
                  <tbody>
                    <tr>
                      <td class="firstcol">Cloud Service Charges</td>
                      <td id ="bp2_cs_vf"></td>
                      <td id ="bp2_cs_cd"></td>
                      <td id ="bp2_cs_dw"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Non-Replicated Storage Charges</td>
                      <td id ="bp2_nr_vf"></td>
                      <td id ="bp2_nr_cd"></td>
                      <td id ="bp2_nr_dw"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Enterprise Backups</td>
                      <td id ="bp2_eb_vf"></td>
                      <td id ="bp2_eb_cd"></td>
                      <td id ="bp2_eb_dw"></td>
                    </tr>           
                    <tr>
                      <td><strong>Grand Total</strong></td>
                      <td attr="gTotal"><input attr="gTotal" type="text" id ="gtb1"></td>
                      <td attr="gTotal"><input attr="gTotal" type="text" id ="gtb2"></td>
                      <td attr="gTotal"><input attr="gTotal" type="text" id ="gtb3"></td>
                    </tr>
                  </tbody>
                </table>
              </div>

              <!-- PANEL 3 -->

              <div class="content panel1-3Wrap" id="panel1-3">
                <div>
                  <div>
                    <p class="cld-item-3and4">Total number of VM's?</p>
                    <input id ="p3_total_vm" class="vms" type="text" placeholder="0">
                    <p class="cld-item-3and4 p-itemNth2">Total RAM for all VM's?</p>
                    <input id ="p3_ram" class="vms" type="text" placeholder="0">
                     <label class="gb-3 vtAl">GB</label>
                  </div>
                  <div>
                    <p class="cld-item-3and4">Total non-replicated storage for all VM's</p>
                    <input id ="p3_non_rep_storage"class="vms" type="text" placeholder="0">
                    <label class="gb-3 vtAl">GB</label>
                  </div>
                  <div class=" columns">
                    <button attr="go" id="btnSubmitp3">Go</button>
                    <br>
                    <button attr="reset">Reset</button>
                  </div>
                </div>

                <!-- GOLD TABLE -->

                <span class="label gold">gold level</span>
                <table class="estimatorGlobal estGlobalTable-tab3">
                  <thead>
                    <tr>
                      <th attr="totals">Totals</th>
                      <th attr="lineItemChange">Line Item Charges</th>
                    </tr>
                  </thead>
                  <tbody>
                    <tr>
                      <td class="firstcol">Labor Charges (initial setup)</td>
                      <td id ="gp3_lc"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Labor Charges (annual recurring)</td>
                      <td id ="gp3_lca"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Cloud Service Charges</td>
                      <td id ="gp3_cs"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Non-Replicated Storage Charges</td>
                      <td id ="gp3_nr"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Enterprise Backups</td>
                      <td id ="gp3_eb" ></td>
                    </tr>
                    <tr>
                        <td class="firstcol">
                        Enterprise Administration Inicidentals*<br><i>*includes Performance Monitoring and Security 
                        Monitoring</i>
                        </td>
                      <td id ="gp3_ea"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Recurring Build, Program and Project Management</td>
                      <td id ="gp3_rb"></td>
                    </tr>
                    <tr>
                      <td><strong>Grand Total</strong></td>
                      <td attr="gTotal"><input attr="gTotal" type="text" id="p3gtg"></td>
                    </tr>
                  </tbody>
                </table>

                <!-- SILVER TABLE -->

                <span class="label silver">silver level</span>
                <table class="estimatorGlobal estGlobalTable-tab3">
                  <thead>
                    <tr>
                      <th attr="totals">Totals</th>
                      <th attr="lineItemChange">Line Item Charges</th>
                    </tr>
                  </thead>
                  <tbody>
                    <tr>
                      <td class="firstcol">Cloud Service Charges</td>
                      <td id ="sp3_cs"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Non-Replicated Storage Charges</td>
                      <td id ="sp3_nr"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Enterprise Backups</td>
                      <td id ="sp3_eb"></td>
                    </tr>           
                    <tr>
                      <td class="firstcol">Enterprise Administration Incidentals*<br><i>*includes Security Monitoring only</i></td>
                      <td id ="sp3_ea"></td>
                    </tr>
                    <tr>
                      <td><strong>Grand Total</strong></td>
                      <td attr="gTotal"><input attr="gTotal" type="text" id ="p3gts"></td>
                    </tr>
                  </tbody>
                </table>

                <!-- BRONZE TABLE -->

                <span class="label bronze">bronze level</span>
                <table class="estimatorGlobal estGlobalTable-tab3">
                  <thead>
                    <tr>
                      <th attr="totals">Totals</th>
                      <th attr="lineItemChange">Line Item Charges</th>
                    </tr>
                  </thead>
                  <tbody>
                    <tr>
                      <td class="firstcol">Cloud Service Charges</td>
                      <td id ="bp3_cs"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Non-Replicated Storage Charges</td>
                      <td id ="bp3_nr"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Enterprise Backups</td>
                      <td id ="bp3_eb"></td>
                    </tr>           
                    <tr>
                      <td><strong>Grand Total</strong></td>
                      <td attr="gTotal"><input attr="gTotal" type="text" id="p3gtb"></td>
                    </tr>
                  </tbody>
                </table>
              </div>

              <!-- PANEL 4 -->

              <div class="content panel1-4Wrap" id="panel1-4">
                <div>
                  <div>
                    <p class="cld-item-3and4 cld-item4">Total number of VM's?</p>
                    <input type="text" class="vms" id ="p4_total_vm" placeholder="0">
                    <p class="cld-item-3and4 cld-item4">Total RAM for all VM's?</p>
                    <input type="text" class="vms" id ="p4_total_ram" placeholder="0">
                     <label class="gb-4 vtAl">GB</label>
                  </div>
                  <div>
                    <p class="cld-item-3and4 cld-item4">Total non-replicated storage for all VM's?</p>
                    <input type="text" class="vms" id="p4_total_nr_storage" placeholder="0">
                    <label class="gb-4 vtAl">GB</label>
                  </div>
                  <div>
                    <p class="cld-item-3and4 cld-item4b">Total replicated storage for all VM's?</p>
                    <input type="text" class="vms" id="p4_total_storage" placeholder="0">
                    <label class="gb-4 vtAl">GB</label>
                  </div>
                  <div class="columns">
                    <button attr="go" id ="btnSubmitp4">Go</button>
                    <br>
                    <button attr="reset">Reset</button>
                  </div>
                </div>

                <table class="estimatorGlobal estGlobalTable-tab4">
                  <thead>
                    <tr>
                      <th attr="totals">Totals</th>
                      <th attr="lineItemChange">Line Item Charges</th>
                      <th attr="exclEntAdmin">Excluding Enterprise Admin</th>
                    </tr>
                  </thead>
                  <tbody>
                    <tr>
                      <td class="firstcol">Labor Charges (initial setup)</td>
                      <td id ="lc_1"></td>
                      <td id ="lc_2"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Labor Charges (annual recurring)</td>
                      <td id ="lca_1"></td>
                      <td id ="lca_2"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Virtual Machine Charges</td>
                      <td id ="vm_1"></td>
                      <td id ="vm_2"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Storage Charges</td>
                      <td id ="sc_1"></td>
                      <td id ="sc_2"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Replicated Storage Charges</td>
                      <td id ="rs_1"></td>
                      <td id ="rs_2"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Enterprise Backups</td>
                      <td id ="eb_1"></td>
                      <td id ="eb_2"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Enterprise Administration (ATO, C&amp;A, Performance Monitoring, Continuous 
                      Security Monitoring)</td>
                      <td id ="ea_1"></td>
                      <td id ="ea_2"></td>
                    </tr>
                    <tr>
                      <td class="firstcol">Recurring Build, Program and Project Management</td>
                      <td id ="rb_1"></td>
                      <td id ="rb_2"></td>
                    </tr>
                    <tr>
                      <td><strong>Grand Total</strong></td>
                      <td attr="gTotal"><input attr="gTotal" type="text" id="p4gt1"></td>
                      <td attr="gTotal"><input attr="gTotal" type="text" id ="p4gt2"></td>
                    </tr>
                  </tbody>
                </table>
              </div>

              <!-- PANEL 5 -->

              <div class="content panel1-5Wrap" id="panel1-5">
                
                <div class="table-tab5Wrapper">
                  <table class="estimatorGlobal estGlobalTable-tab5">
                    <thead>
                      <tr>
                        <th attr="lid">Line Item Description</th>
                        <th attr="unitType">Unit Type</th>
                        <th attr="ppuTh">Price per Unit</th>
                        <th attr="qtyTh">Quantity</th>
                        <th attr="ttl">Total</th>
                      </tr>
                    </thead>
                    <tbody>
                      <tr>
                        <td>Application Administrator - Contractor Services</td>
                        <td>Labor Hour</td>
                        <td attr="ppu">$140.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Application Developer - Contractor Services</td>
                        <td>Labor Hour</td>
                        <td attr="ppu">$115.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Architect Labor</td>
                        <td>Labor Hour</td>
                        <td attr="ppu">$125.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>A & A Services: Major APPL/First Year</td>
                        <td>Each</td>
                        <td attr="ppu">$68,299.26</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>A & A Services: Major APPL/Maintenance Years</td>
                        <td>Each</td>
                        <td attr="ppu">$34,149.63</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>A & A Services: Minor APPL/First Year</td>
                        <td>Each</td>
                        <td attr="ppu">$34,149.63</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>A & A Services: Minor APPL/Maintenance Years</td>
                        <td>Each</td>
                        <td attr="ppu">$17,074.82</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Build Manager - Contractor Services</td>
                        <td>Labor Hour</td>
                        <td attr="ppu">$120.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Central Processor Time</td>
                        <td>CPU Hour</td>
                        <td attr="ppu">$139.84</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Central Processor Time Essential Support</td>
                        <td>CPU Hour</td>
                        <td attr="ppu">$170.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Central Processor Time Mission Critical Support</td>
                        <td>CPU Hour</td>
                        <td attr="ppu">$197.76</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Cloud Computing</td>
                        <td>GB Day</td>
                        <td attr="ppu">$2.70</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Computer Room Space - AITC</td>
                        <td>Sq. Ft./Yr</td>
                        <td attr="ppu">$492.92</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Computer Room Space - CRDC</td>
                        <td>Sq. Ft./Yr</td>
                        <td attr="ppu">$263.15</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Computer Room Space - HITC</td>
                        <td>Sq. Ft./Yr</td>
                        <td attr="ppu">$263.15</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Computer Room Space - PITC</td>
                        <td>Sq. Ft./Yr</td>
                        <td attr="ppu">$263.15</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Computer Systems Analyst</td>
                        <td>Labor Hour</td>
                        <td attr="ppu">$97.92</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Computer Systems Analyst (DB)</td>
                        <td>Labor Hour</td>
                        <td attr="ppu">$127.27</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Contract Programming - Database Admin</td>
                        <td>Labor Hour</td>
                        <td attr="ppu">$130.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Contract Programming Unix SA</td>
                        <td>Labor Hour</td>
                        <td attr="ppu">$125.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Contract Programming Win SA</td>
                        <td>Labor Hour</td>
                        <td attr="ppu">$125.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Contractor Support</td>
                        <td>Actual Cost</td>
                        <td attr="ppu">$1.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Data Circuit Lease Charge</td>
                        <td>Actual Cost</td>
                        <td attr="ppu">$1.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Data Entry</td>
                        <td>Actual Cost</td>
                        <td attr="ppu">$1.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Desktop Support Services</td>
                        <td>No. Items (PCs, Laptops, iPhones, etc.)</td>
                        <td attr="ppu">$130.63</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Disk Storage</td>
                        <td>GB Month</td>
                        <td attr="ppu">$0.90</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Disk Storage Replication</td>
                        <td>GB Month</td>
                        <td attr="ppu">$4.77</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>DRP Contract Charges (Processing Services.)</td>
                        <td>Actual Cost</td>
                        <td attr="ppu">$1.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Enterprise Backup (EBU)</td>
                        <td>GB Month</td>
                        <td attr="ppu">$0.69</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Enterprise Communications</td>
                        <td>Piece</td>
                        <td attr="ppu">$1,176,958.68</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Equipment Maintenance Charge</td>
                        <td>Actual Cost</td>
                        <td attr="ppu">$1.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Facilities Management & Eng. Services</td>
                        <td>Actual Cost</td>
                        <td attr="ppu">$1.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Facility Reimbursement - PITC</td>
                        <td>Piece</td>
                        <td attr="ppu">$1.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Hardware Purchases</td>
                        <td>Actual Cost</td>
                        <td attr="ppu">$1.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>HW/SW Maintenace is charged M&S plus applied G&A: FY13 is:</td>
                        <td></td>
                        <td attr="ppu">$0.10</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>HW/SW Purchase are charged only M&S: FY13 is:</td>
                        <td></td>
                        <td attr="ppu">$0.08</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Linux SA</td>
                        <td>Labor Hour</td>
                        <td attr="ppu">$122.54</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Mail</td>
                        <td>Piece</td>
                        <td attr="ppu">$0.12</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Miscellaneous Administrative Services</td>
                        <td>Actual Cost</td>
                        <td attr="ppu">--</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Miscellaneous Administrative Services PassThru</td>
                        <td>Actual Cost</td>
                        <td attr="ppu">$1.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Monitoring - Agent Based</td>
                        <td># of Agents</td>
                        <td attr="ppu">$5,237.92</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Monitoring - Server Based</td>
                        <td># of Servers</td>
                        <td attr="ppu">$1,714.19</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>NCA Customer Support</td>
                        <td>Actual Cost</td>
                        <td attr="ppu">$611,294.51</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Office Space - AITC</td>
                        <td>Sq. Ft./Yr.</td>
                        <td attr="ppu">$67.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Office Space - HITC</td>
                        <td>Sq. Ft./Yr.</td>
                        <td attr="ppu">$50.14</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Office Space - PITC</td>
                        <td>Sq. Ft./Yr.</td>
                        <td attr="ppu">$50.14</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Outgoing Mail - Postage</td>
                        <td>Actual Cost</td>
                        <td attr="ppu">$1.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Print</td>
                        <td>Images</td>
                        <td attr="ppu">$0.03</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Priority Shipping</td>
                        <td>Actual Cost</td>
                        <td attr="ppu">$1.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Production Services</td>
                        <td>Labor Hour</td>
                        <td attr="ppu">$82.72</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Program Manager (Professional)</td>
                        <td>Labor Hour</td>
                        <td attr="ppu">$120.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Project Manager - Contractor Services</td>
                        <td>Labor Hour</td>
                        <td attr="ppu">$135.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Report Viewing Service</td>
                        <td>Actual Cost</td>
                        <td attr="ppu">$1.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Requirements Analyst/Technical Writer - Contractor Services</td>
                        <td>Labor Hour</td>
                        <td attr="ppu">$120.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Security Monitoring and Scanning Services: Major 1st Year</td>
                        <td>Each</td>
                        <td attr="ppu">$28,772.64</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Security Monitoring and Scanning Services: Major Maintenance</td>
                        <td>Each</td>
                        <td attr="ppu">$14,386.32</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Security Monitoring and Scanning Services: Minor 1st Year</td>
                        <td>Each</td>
                        <td attr="ppu">$14,386.32</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Security Monitoring and Scanning Services: Minor Maintenance</td>
                        <td>Each</td>
                        <td attr="ppu">$7,193.16</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Security Support to NCA</td>
                        <td>Firm Fixed Price</td>
                        <td attr="ppu">$205,531.64</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Security Support to VBA</td>
                        <td>Firm Fixed Price</td>
                        <td attr="ppu">$1,459,519.32</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Software Maintenance Charge</td>
                        <td>Actual Cost</td>
                        <td attr="ppu">$1.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Software Purchase</td>
                        <td>Actual Cost</td>
                        <td attr="ppu">$1.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Sr. Computer Systems Analyst</td>
                        <td>Labor Hour</td>
                        <td attr="ppu">$114.53</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Tape Mounts</td>
                        <td>Tape Mounts</td>
                        <td attr="ppu">$1.42</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Tape Storage</td>
                        <td>Cartridge Months</td>
                        <td attr="ppu">$1.63</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Telecommunications Service Support</td>
                        <td>Ports Ea/Yr</td>
                        <td attr="ppu">$2,864.34</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Telephone Circuit Lease Charge</td>
                        <td>Actual Cost</td>
                        <td attr="ppu">$1.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Telephone Line Charges</td>
                        <td>Lines</td>
                        <td attr="ppu">$145.65</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Training and Travel</td>
                        <td>Actual Cost</td>
                        <td attr="ppu">$1.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>UNIX Platform Expense: OS UNIX Shared</td>
                        <td>Per Platform</td>
                        <td attr="ppu">$9,286.27</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>UNIX Platform Expense: UNIX VM Platform - large tier</td>
                        <td>Large = 24 GB</td>
                        <td attr="ppu">$19,783.41</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>UNIX Platform Expense: UNIX VM Platform - medium tier</td>
                        <td>Medium > 8 GB to < 16 GB</td>
                        <td attr="ppu">$13,188.94</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>UNIX Platform Expense: UNIX VM Platform - small tier</td>
                        <td>Small <= 8 GB</td>
                        <td attr="ppu">$6,594.47</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Unix SA</td>
                        <td>Labor Hour</td>
                        <td attr="ppu">$125.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Web Operations - Contractor Services</td>
                        <td>Firm Fixed Price</td>
                        <td attr="ppu">$129.81</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Win Platform Expense: OS WIN Shared</td>
                        <td>Per Platform</td>
                        <td attr="ppu">$2,684.34</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Win Platform Expense: SQL Farm</td>
                        <td>Per Platform</td>
                        <td attr="ppu">$1,250.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Win Platform Expense: VMWare Platform</td>
                        <td>Per GB of Memory</td>
                        <td attr="ppu">$560.38</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Win Platform Expense: WEB Farm</td>
                        <td>Per Platform</td>
                        <td attr="ppu">$7,195.28</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Win SA</td>
                        <td>Labor Hour</td>
                        <td attr="ppu">$125.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>Wireless Services</td>
                        <td>Actual Cost</td>
                        <td attr="ppu">$1.00</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>zVM Platform Expense: zVM Platform - large tier</td>
                        <td>Small +75%</td>
                        <td attr="ppu">$5,866.14</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>zVM Platform Expense: zVM Platform - medium tier</td>
                        <td>Small +25%</td>
                        <td attr="ppu" attr="ppu">$4,190.10</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                      <tr>
                        <td>zVM Platform Expense: zVM Platform - small tier</td>
                        <td>Per Platform</td>
                        <td attr="ppu">$3,352.08</td>
                        <td><input attr="quantity" type="text" maxlength="5"></td>
                        <td></td>
                      </tr>
                    </tbody>
                  </table>
                </div>
                <!-- /.table-tab5Wrapper -->
                <table class="panel5grandTotal">
                  <tbody>
                    <tr>
                      <td attr="p5buttons"><button attr="go" id="btnSubmitp5">Go</button></td>
                      <td attr="p5gTtlTd"><strong>Grand Total</strong></td>
                      <td attr="gTotal"><input attr="p5gTotal-5" type="text"></td>
                    </tr>
                  </tbody>
                </table>
                  <button class="email">Email</button>
                  <p class="emailP">Select the email button if you would like a copy of this estimate emailed to you. 
                  <em>NOTE: Only items with a quantity greater than 0 will be included in the email</em>
                  </p>
                  <p class="emailNotice">This estimate is for budgetary purposes only. These amounts do not constitute 
                  official EO quotes for services. Any changes to the requirements may result in an increase or 
                  decrease to this estimate. This estimate does not take into account any project schedule or 
                  prioritization. This estimate is for one or more services provided by BAH Enterprise Operations (EO). 
                  For a full estimate, it is easier to use one of the other estimating tools on this page. This 
                  estimate uses FY14 rates.</p>
              </div>

            </div>
            <!-- / .estContentBlk -->
          </form>
          <!-- /form -->
        <!-- </div> -->
        <!-- /.columns -->
      </div>
      <!-- .row -->
    </section>

<!-- FOOTER -->

    <div class="clearfix">
      <footer class="blue">
        <p>Booz Allen Hamilton -  Copyright 2014</p>
      </footer>
    </div>
    
    <script src="js/vendor/jquery.js"></script>
    <script src="js/foundation.min.js"></script>
    <script>
      $(document).foundation();
    </script>
  </body>
</html>
