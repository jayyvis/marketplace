$(document).ready(function() {
  
  Number.prototype.numberFormat = function(decimals, dec_point, thousands_sep) {
    dec_point = typeof dec_point !== 'undefined' ? dec_point : '.';
    thousands_sep = typeof thousands_sep !== 'undefined' ? thousands_sep : ',';

    var parts = this.toFixed(decimals).toString().split('.');
    parts[0] = parts[0].replace(/\B(?=(\d{3})+(?!\d))/g, thousands_sep);

    return parts.join(dec_point);
}
	$('#toltp').val('');
	$('#tolcd').val('');
	$('#toldw').val('');
	$('#gtg1').val('');
	$('#gtg2').val('');
	$('#gtg3').val('');
	$('#gts1').val('');
	$('#gts2').val('');
	$('#gts3').val('');
	$('#gtb1').val('');
	$('#gtb2').val('');
	$('#gtb3').val('');
	$('#p3gtg').val('');
	$('#p3gts').val('');
	$('#p3gtb').val('');
	$('#p4gt1').val('');
	$('#p4gt2').val('');
  
  var conb2 = .01;
  var conb3 = 1024;
  var conb4 = 10240;
  var conb7 = 196.69;
  var conb8 = 122.54;
  var conb9 = 157.39;
  var conb10 = 187.64;
  var conb11 = 122.54;
  var conb12 = 123.25;
  var conb13 = 162.20;
  var conb16 = 79948.63;
  var conb17 = 33850.16;
  var conb18 = 39974.32;
  var conb19 = 16925.08;
  var conb20 = 39974.32;
  var conb21 = 8462.54;
  var conb22 = 1714.19;
  var conb23 = 498.39;
  var conb24 = 5.30;
  var conb25 = 0.73;
  var conb26 = 1;
  var conb29 = 2.70;
  var conb35 = 4;
  var conb36 = 1.5*52;
  var conb37 = 40;
  var conb38 = 4;
  var conb39 = 1.5*52;
  var conb40 = 4;
  var conb41 = 1.5*52;
  var conb42 = 0.01;
  var conb43 = 0.04;
  var conb44 = 0.05;
  
 
  
  var conc2 = 16;
  var conc3 = 16;
  var conc4 = 16;
  
  var cond2 = 200;
  var cond3 = 600;
  var cond4 = 20;
  
  var cone2 = 6;
  var cone3 = 6;
  var cone4 = 6;
$('#btnSubmit').click(function(e) {
  var v1 = $('#p1_concurrent_users').val();
  var v2 = $('#p1_registered_users').val();
    
if(!isNaN(v1) && !isNaN(v2)) {

  //Veteran-facing (OLTP)//
  var B22 = (conc2/cond2)*v1; //GB of RAM//
  var B23 = B22/cone2;
  var B24 = (conb7*(B23*conb35));
  var B25 = (conb7*(B23*conb36));
  var B26 = conb8*conb37;
  var B27 = (conb10*(B23*conb38));
  var B28 = (conb10*(B23*conb39));
  var B29 = (conb11*(B23*conb40));
  var B30 = (conb11*(B23*conb41));
  var B10 = B24+B26+B27+B29;
  var B11 = B25+B28+B30;
  var B12 = conb23*B22;
  var B13 = conb2*v2*conb24*12;
  var B14 = conb2*conb25*v2*12;
  var B15 = (conb16+conb17+(conb22*B23));
  var B16 = B10+B11+B12+B13+B14+B15;
  var B31 = B16*conb42;
  var B32 = B16*conb43;
  var B33 = B16*conb44;
  var B17 = B31+B32+B33;
  var B18 = B16+B17;
  
//CONTENT DISTRIBUTION VARS//


  var C22 = conc3/cond3; //GB of RAM//
  var C23 = C22/cone3;
  var C24 = (conb7*(C23*conb35));
  var C25 = (conb7*(C23*conb36));
  var C26 = conb8*conb37;
  var C27 = (conb10*(C23*conb38));
  var C28 = (conb10*(C23*conb39));
  var C29 = (conb11*(C23*conb40));
  var C30 = (conb11*(C23*conb41));
  var C10 = C24+C26+C27+C29;
  var C11 = C25+C28+C30;
  var C12 = conb23*C22;
  var C13 = conb2*v2*conb24*12;
  var C14 = conb2*conb25*v2*12;
  var C15 = (conb16+conb17+(conb22*C23));
  var C16 = C10+C11+C12+C13+C14+C15;
  var C31 = C16*conb42;
  var C32 = C16*conb43;
  var C33 = C16*conb44;
  var C17 = C31+C32+C33;
  var C18 = C16+C17;
  
  
//DATA WAREHOUSE//


  var D22 = conc4/cond4; //GB of RAM//
  var D23 = D22/cone3;
  var D24 = (conb7*(D23*conb35));
  var D25 = (conb7*(D23*conb36));
  var D26 = conb8*conb37;
  var D27 = (conb10*(D23*conb38));
  var D28 = (conb10*(D23*conb39));
  var D29 = (conb11*(D23*conb40));
  var D30 = (conb11*(D23*conb41));
  var D10 = Math.round(D24+D26+D27+D29);
  var D11 = D25+D28+D30;
  var D12 = conb23*D22;
  var D13 = conb2*v2*conb24*12;
  var D14 = conb2*conb25*v2*12;
  var D15 = (conb16+conb17+(conb22*D23));
  var D16 = D10+D11+D12+D13+D14+D15;
  var D31 = D16*conb42;
  var D32 = D16*conb43;
  var D33 = D16*conb44;
  var D17 = D31+D32+D33;
  var D18 = D16+D17;

    
  var tot_oltp = B10+B11+B12+B13+B16+B17+B18;
  var tot_cd = C10+C11+C12+C13+C16+C17+C18;
  var tot_dw = D10+D11+D12+D13+D16+D17+D18;
  
  
    $('#lc_vf').text("$ "+B10.numberFormat(2));
    $('#lc_cd').text("$ "+C10.numberFormat(2));
    $('#lc_dw').text("$ "+D10.numberFormat(2));
    $('#lca_vf').text("$ "+B11.numberFormat(2));
    $('#lca_cd').text("$ "+C11.numberFormat(2));
    $('#lca_dw').text("$ "+D11.numberFormat(2));
	$('#vmc_vf').text("$ "+B12.numberFormat(2));
	$('#vmc_cd').text("$ "+C12.numberFormat(2));
	$('#vmc_dw').text("$ "+D12.numberFormat(2));
	$('#sc_vf').text("$ "+B13.numberFormat(2));
	$('#sc_cd').text("$ "+C13.numberFormat(2));
	$('#sc_dw').text("$ "+D13.numberFormat(2));
	$('#eb_vf').text("$ "+B16.numberFormat(2));
	$('#eb_cd').text("$ "+C16.numberFormat(2));
	$('#eb_dw').text("$ "+D16.numberFormat(2));
	$('#ea_vf').text("$ "+B17.numberFormat(2));
	$('#ea_cd').text("$ "+C17.numberFormat(2));
	$('#ea_dw').text("$ "+D17.numberFormat(2));
	$('#rb_vf').text("$ "+B18.numberFormat(2));
	$('#rb_cd').text("$ "+C18.numberFormat(2));
	$('#rb_dw').text("$ "+D18.numberFormat(2));
	$('#toltp').val("$ "+tot_oltp.numberFormat(2));
	$('#tolcd').val("$ "+tot_cd.numberFormat(2));
	$('#toldw').val("$ "+tot_dw.numberFormat(2));
  }
  
  e.preventDefault();
});

//TAB 2:EASY CLOUD//
$('#btnSubmitp2').click(function(e) {
  e.preventDefault();

  var v3 = $('#p2_concurrent_users').val();
  var v4 = $('#p2_registered_users').val();
  if(!isNaN(v3) && !isNaN(v4)) {

    //Veteran-facing (OLTP)//
  var B22 = (conc2/cond2)*v3; //GB of RAM//
  var B23 = B22/cone2;
  var B24 = (conb7*(B23*conb35));
  var B25 = (conb7*(B23*conb36));
  var B26 = conb8*conb37;
  var B27 = (conb10*(B23*conb38));
  var B28 = (conb10*(B23*conb39));
  var B29 = (conb11*(B23*conb40));
  var B30 = (conb11*(B23*conb41));
  var B10 = B24+B26+B27+B29;
  var B11 = B25+B28+B30;
  var B12 = conb29*B22*365;
  var B13 = conb2*v4*conb26*12;
  var B14 = conb2*conb25*v4*12;
  var B15 = (conb17+(conb22*B23));
  var B16 = B10+B11+B12+B13+B14+B15;
  var B31 = B16*conb42;
  var B32 = B16*conb43;
  var B33 = B16*conb44;
  var B17 = B31+B32+B33;
  var B18 = B16+B17;
  
  var C22 = (conc3/cond3)*v3; //GB of RAM//
  var C23 = C22/cone3;
  var C24 = (conb7*(C23*conb35));
  var C25 = (conb7*(C23*conb36));
  var C26 = conb8*conb37;
  var C27 = (conb10*(C23*conb38));
  var C28 = (conb10*(C23*conb39));
  var C29 = (conb11*(C23*conb40));
  var C30 = (conb11*(C23*conb41));
  var C10 = C24+C26+C27+C29;
  var C11 = C25+C28+C30;
  var C12 = conb29*C22*365;
  var C13 = conb26*conb3*12;
  var C14 = conb25*conb3*12;
  var C15 =(conb17+(conb22*C23));
  var C16 = C10+C11+C12+C13+C14+C15;
  var C31 = C16*conb42;
  var C32 = C16*conb43;
  var C33 = C16*conb44;
  var C17 = C31+C32+C33;
  var C18 = C16+C17;
  
  var D22 = (conc4/cond4)*v3; //GB of RAM//
  var D23 = D22/cone3;
  var D24 = (conb7*(D23*conb35));
  var D25 = (conb7*(D23*conb36));
  var D26 = conb8*conb37;
  var D27 = (conb10*(D23*conb38));
  var D28 = (conb10*(D23*conb39));
  var D29 = (conb11*(D23*conb40));
  var D30 = (conb11*(D23*conb41));
  var D10 = Math.round(D24+D26+D27+D29);
  var D11 = D25+D28+D30;
  var D12 = conb29*D22*365;
  var D13 = conb26*conb24*12;
  var D14 = conb25*conb4*12;
  var D15 = (conb17+(conb22*D23));
  var D16 = D10+D11+D12+D13+D14+D15;
  var D31 = D16*conb42;
  var D32 = D16*conb43;
  var D33 = D16*conb44;
  var D17 = D31+D32+D33;
  var D18 = D16+D17;

  var tot_g1 = B10+B11+B12+B13+B14+B15+B17;
  var tot_g2 = C10+C11+C12+C13+C14+C15+C17;
  var tot_g3 = D10+D11+D12+D13+D14+D15+D17;
  
  var tot_s1 = B12+B13+B14+conb17;
  var tot_s2 = C12+C13+C14+conb17;
  var tot_s3 = D12+D13+D14+conb17;
  
  var tot_b1 = B12+B13+B14;
  var tot_b2 = C12+C13+C14;
  var tot_b3 = D12+D13+D14;
  
  //GOLD PANE//
	$('#gp2_lc_vf').text("$ "+B10.numberFormat(2));
	$('#gp2_lc_cd').text("$ "+C10.numberFormat(2));
	$('#gp2_lc_dw').text("$ "+D10.numberFormat(2));
	$('#gp2_lca_vf').text("$ "+B11.numberFormat(2));
	$('#gp2_lca_cd').text("$ "+C11.numberFormat(2));
	$('#gp2_lca_dw').text("$ "+D11.numberFormat(2));
	$('#gp2_cs_vf').text("$ "+B12.numberFormat(2));
	$('#gp2_cs_cd').text("$ "+C12.numberFormat(2));
	$('#gp2_cs_dw').text("$ "+D12.numberFormat(2));
	$('#gp2_nr_vf').text("$ "+B13.numberFormat(2));
	$('#gp2_nr_cd').text("$ "+C13.numberFormat(2))
	$('#gp2_nr_dw').text("$ "+D13.numberFormat(2));
	$('#gp2_eb_vf').text("$ "+B14.numberFormat(2));
	$('#gp2_eb_cd').text("$ "+C14.numberFormat(2));
	$('#gp2_eb_dw').text("$ "+D14.numberFormat(2));
	$('#gp2_ea_vf').text("$ "+B15.numberFormat(2));
	$('#gp2_ea_cd').text("$ "+C15.numberFormat(2));
	$('#gp2_ea_dw').text("$ "+D15.numberFormat(2));
	$('#gp2_ppm_vf').text("$ "+B17.numberFormat(2));
	$('#gp2_ppm_cd').text("$ "+C17.numberFormat(2));
	$('#gp2_ppm_dw').text("$ "+D17.numberFormat(2));
	
	$('#gtg1').val("$ "+tot_g1.numberFormat(2));
	$('#gtg2').val("$ "+tot_g2.numberFormat(2));
	$('#gtg3').val("$ "+tot_g3.numberFormat(2));
	
//SILVER PANE//
	$('#sp2_cs_vf').text("$ "+B12.numberFormat(2));
	$('#sp2_cs_cd').text("$ "+C12.numberFormat(2));
	$('#sp2_cs_dw').text("$ "+D12.numberFormat(2));
	$('#sp2_nr_vf').text("$ "+B13.numberFormat(2));
	$('#sp2_nr_cd').text("$ "+C13.numberFormat(2));
	$('#sp2_nr_dw').text("$ "+D13.numberFormat(2));
	$('#sp2_eb_vf').text("$ "+B14.numberFormat(2));
	$('#sp2_eb_cd').text("$ "+C14.numberFormat(2));
	$('#sp2_eb_dw').text("$ "+D14.numberFormat(2));
	$('#sp2_ppm_vf').text("$ "+conb17.numberFormat(2));
	$('#sp2_ppm_cd').text("$ "+conb17.numberFormat(2));
	$('#sp2_ppm_dw').text("$ "+conb17.numberFormat(2));

	$('#gts1').val("$ "+tot_s1.numberFormat(2));
	$('#gts2').val("$ "+tot_s2.numberFormat(2));
	$('#gts3').val("$ "+tot_s3.numberFormat(2));

//BRONZE PANE//
	$('#bp2_cs_vf').text("$ "+B12.numberFormat(2));
	$('#bp2_cs_cd').text("$ "+C12.numberFormat(2));
	$('#bp2_cs_dw').text("$ "+D12.numberFormat(2));
	$('#bp2_nr_vf').text("$ "+B13.numberFormat(2));
	$('#bp2_nr_cd').text("$ "+C13.numberFormat(2));
	$('#bp2_nr_dw').text("$ "+D13.numberFormat(2));
	$('#bp2_eb_vf').text("$ "+B14.numberFormat(2));
	$('#bp2_eb_cd').text("$ "+C14.numberFormat(2));
	$('#bp2_eb_dw').text("$ "+D14.numberFormat(2));
	
	$('#gtb1').val("$ "+tot_b1.numberFormat(2));
	$('#gtb2').val("$ "+tot_b2.numberFormat(2));
	$('#gtb3').val("$ "+tot_b3.numberFormat(2));
}
});

//TAB 3:CLOUD ITEMIZED//
$('#btnSubmitp3').click(function(e) {
  e.preventDefault();

  var v5 = $('#p3_total_vm').val();
  var v6 = $('#p3_ram').val();
  var v7 = $('#p3_non_rep_storage').val();
  
  if(!isNaN(v5) && !isNaN(v6) && !isNaN(v7)) {
  
  var B22 = v6; //GB of RAM//
  var B23 = v5;
  var B24 = (conb7*(B23*conb35));
  var B25 = (conb7*(B23*conb36));
  var B26 = conb8*conb37;
  var B27 = (conb10*(B23*conb38));
  var B28 = (conb10*(B23*conb39));
  var B29 = (conb11*(B23*conb40));
  var B30 = (conb11*(B23*conb41));
  var B10 = B24+B26+B27+B29;
  var B11 = B25+B28+B30;
  var B12 = conb29*B22*365;
  var B13 = conb26*v7*12;
  var B14 = conb25*v7*12;
  var B15 = (conb17+(conb22*B23));
  var B16 = B10+B11+B12+B13+B14+B15;
  var B31 = B16*conb42;
  var B32 = B16*conb43;
  var B33 = B16*conb44;
  var B17 = B31+B32+B33;
  var B18 = B16+B17;
  
  var SB12 = conb29*v6*365;
  
  var tot_g1 = B10+B11+B12+B13+B14+B15+B16;
  var tot_s1 = SB12+B13+B14+conb17;
  var tot_b1 = B12+B13+B14;
  


  //GOLD PANE PANEL 3//
	$('#gp3_lc').text("$ "+B10.numberFormat(2));
	$('#gp3_lca').text("$ "+B11.numberFormat(2));
	$('#gp3_cs').text("$ "+B12.numberFormat(2));
	$('#gp3_eb').text("$ "+B13.numberFormat(2));
	$('#gp3_nr').text("$ "+B14.numberFormat(2));
	$('#gp3_ea').text("$ "+B15.numberFormat(2));
	$('#gp3_rb').text("$ "+B16.numberFormat(2));
	$('#p3gtg').val("$ "+tot_g1.numberFormat(2));
	
	
//SILVER PANE//
	$('#sp3_cs').text("$ "+SB12.numberFormat(2));
	$('#sp3_nr').text("$ "+B13.numberFormat(2));
	$('#sp3_eb').text("$ "+B14.numberFormat(2));
	$('#sp3_ea').text("$ "+conb17.numberFormat(2));
	$('#p3gts').val("$ "+tot_s1.numberFormat(2));


//BRONZE PANE//
	$('#bp3_cs').text("$ "+B12.numberFormat(2));
	$('#bp3_nr').text("$ "+B13.numberFormat(2));
	$('#bp3_eb').text("$ "+B14.numberFormat(2));
	$('#p3gtb').val("$ "+tot_b1.numberFormat(2));
}
});


//TAB 3:CLOUD ITEMIZED//
$('#btnSubmitp4').click(function(e) {
  e.preventDefault();

  var v8 = $('#p4_total_vm').val();
  var v9 = $('#p4_total_ram').val();
  var v10 = $('#p4_total_nr_storage').val();
  var v11 = $('#p4_total_storage').val();
  

  if(!isNaN(v8) && !isNaN(v9) && !isNaN(v10) && !isNaN(v11)) {
  
  
  var B24 = v9; //GB of RAM//
  var B25 = v8;
  var B26 = (conb7*(B25*conb35));
  var B27 = (conb7*(B25*conb36));
  var B28 = conb8*conb37;
  var B29 = (conb10*(B25*conb38));
  var B30 = (conb10*(B25*conb39));
  var B31 = (conb11*(B25*conb40));
  var B32 = (conb11*(B25*conb41));
  var B11 = B26+B28+B29+B31;
  var B12 = B27+B30+B32;
  var B13 = conb23*B24;
  var B14 = conb26*v10*12;
  var B16 = conb16+conb26*v10*12;
  var B17 = conb17+B26*v10*12;
  var B18 = conb18+B26*v10*12;
  var B33 = B18*conb42;
  var B34 = B18*conb43;
  var B35 = B16*conb44;
  var B19 = conb19+B26*v10*12;
  var B20 = conb20+B26*v10*12;
  var B21 = B33+B34+B35;
  var B22 = B11+B12+B13+B14+B16+B17+B18+B21;
  
  var C22 = (conc3/cond3)*v9; //GB of RAM//
  var C23 = C22/cone3;
  var C24 = (conb7*(C23*conb35));
  var C25 = (conb7*(C23*conb36));
  var C26 = conb8*conb37;
  var C27 = (conb10*(C23*conb38));
  var C28 = (conb10*(C23*conb39));
  var C29 = (conb11*(C23*conb40));
  var C30 = (conb11*(C23*conb41));
  var C31 = conb11*(v8*conb40);
  var C32 = conb11*(v8*conb41)
  var C11 = C26+C28+C29+C31;
  var C12 = C27+C30+C32;
  var C13 = conb23*C22;
  var C14 = conb26*v10*12;
  var C17 = C31+C32+C33;
  var C18 = C11+C12+C13+C14;
  var C33 = C18*conb42;
  var C34 = C18*conb43;
  var C35 = C18*conb44;
  var C36 = C33+C34+C35;
  var C22 = C11+C12+C13+C14+C36;

  
  var gt1 = B22
  var gt2 = C22


  //LINE ITEM CHANGES//
	$('#lc_1').text("$ "+B11.numberFormat(2));
	$('#lca_1').text("$ "+B12.numberFormat(2));
	$('#vm_1').text("$ "+B13.numberFormat(2));
	$('#sc_1').text("$ "+B14.numberFormat(2));
	$('#rs_1').text("$ "+B16.numberFormat(2));
	$('#eb_1').text("$ "+B17.numberFormat(2));
	$('#ea_1').text("$ "+B18.numberFormat(2));
	$('#rb_1').text("$ "+B21.numberFormat(2));
	$('#p4gt1').val("$ "+B22.numberFormat(2));
	
	//EXCULDING ENTERPRISING ADMIN//
	$('#lc_2').text("$ "+C11.numberFormat(2));
	$('#lca_2').text("$ "+C12.numberFormat(2));
	$('#vm_2').text("$ "+C13.numberFormat(2));
	$('#sc_2').text("$ "+C14.numberFormat(2));
	$('#rs_2').text('0.00');
	$('#eb_2').text('0.00');
	$('#ea_2').text('0.00');
	$('#rb_2').text("$ "+C36.numberFormat(2));
	$('#p4gt2').val("$ "+C22.numberFormat(2));



}
});

// Auto-calculate A La Carte tab total upon text field change
//$('table.estGlobalTable-tab5 tbody tr td input').change(function(e) {
// Calculate A La Carte tab total upon button click
$('button#btnSubmitp5').click(function(e) {
  e.preventDefault();
  
  var grand = 0;
	$('table.estGlobalTable-tab5 tbody tr td input').each(function(n) {
	  if ($(this).val() != '') {
	  	var q = parseInt($(this).val());
		  $(this).val(q);	
		  var price = $(this).parent().parent().children('td:nth-child(3)').text();
		  var p = parseFloat(price.replace(/[^0-9\.]+/g,""));
		  var total = q*p;
		  totalfix = total.toFixed(2);
		  $(this).parent().parent().children('td:nth-child(5)').text('$' + totalfix.replace(/\B(?=(\d{3})+(?!\d))/g, ","));
		  grand += total;
		  $(this).parent().parent().children('td:nth-child(5)').addClass('item-total');
	  }
	});
	grand = grand.toFixed(2);
	$('table.panel5grandTotal input').val('$' + grand.replace(/\B(?=(\d{3})+(?!\d))/g, ","));
});

});
