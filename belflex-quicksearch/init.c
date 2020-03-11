/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 1203
   ------------------------------------------------------------------------------- */

vuser_init()
{
 
	web_set_max_html_param_len("999999"); 

	web_set_sockets_option("SSL_VERSION", "2&3"); 
 
	lr_start_transaction("1_Invoke App");
 	web_reg_save_param_regexp(
		"ParamName=ctl00_radStylesheetManager_TSSM",
		"RegExp==\\ '(.*?)';\\\r\\\n\\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ Sys\\.Application\\.remove_load\\(loadHandler\\)",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/Login.aspx*",
		LAST);
 
	web_reg_save_param_ex(
		"ParamName=AspNet_ViewState",
		"LB/IC=__VIEWSTATE\" value=\"",
		"RB/IC=\"",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/Login.aspx*",
		LAST);

 	web_reg_save_param_regexp(
		"ParamName=__VIEWSTATEGENERATOR",
		"RegExp=id=\"__VIEWSTATEGENERATOR\"\\ value=\"(.*?)\"\\ ",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/Login.aspx*",
		LAST);

	web_url("Login.aspx", 
		"URL=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/WebResource.axd?d=m3cmci195IuJDEJw8Ad9w37t-ar6S_p30DNET5tULqLw7XFJh2YiN6Ss8jqHn9dSsoMnt6V8ZKqZirvlHa70GP0TrFw1&t=637100682046795651", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/ScriptResource.axd?d=9x5OvJaQVu0vj9j4xaQBlKKOEaHrkzcdmYjM4RFhcq_Djt9kUkyhoYU-zBekcY7ErwHvsRc6Fag_rhwv4YrfJqE6BjlCkvm8UNUUm_-qZjnXRoo20cEn-b5wePLrceOAAkBxDE5DWZN0-d_FIEREFdILw641&t=ffffffff93f2983c", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/WebResource.axd?d=ppYwzJsRb6AhcOLm41MnVR6O_dxAYwx8kQEpShx-opg0jHDm6nly6o_cE0sit9ie8fEwOeM0k4Lm4iI1v9oFaDaP91E1&t=637100682046795651", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/Telerik.Web.UI.WebResource.axd?_TSM_HiddenField_=ctl00_radScriptManager_TSM&compress=1&_TSM_CombinedScripts_=%3b%3bSystem.Web.Extensions%2c+Version%3d4.0.0.0%2c+Culture%3dneutral%2c+PublicKeyToken%3d31bf3856ad364e35%3aen-US%3a92dc34f5-462f-43bd-99ec-66234f705cd1%3aea597d4b%3ab25378d2%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
		"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a16e4e7cd%3aed16cbdc%3a874f8ea2%3af7645509%3a24ee1bba%3af46195d3%3a19620875%3a39040b5c", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/App_Themes/Default/javascript/telerik-hacks.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/amd-base-url-marker.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Base/koBindings.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Base/cooltipKoBridge.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZxmYKFgIKnrIjLbE5MOYkIy3_KpySJBQ=", "Referer=", ENDITEM, 
		"Url=/MVC/Content/js/External/Ace/bundles-config.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Localization/LocalizationService.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/App_Themes/Default/images/logos/BelflexLogo.png", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/zxcvbn/zxcvbn.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Controls/Tipped.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/Knockout/knockout-3.1.0.debug.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Base/tableSorter.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/common.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/Rx/main.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/main.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Utils/internationalization.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/requirejs-plugins/json.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/moment/moment.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/LinqJS/linq.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/accounting/accounting.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Base/api.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Base/seq.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Base/keys.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Base/dynamic.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/Base/userSettings.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/Rx/rx.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/Rx/rx.time.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/Rx/rx.dom.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/Rx/rx.binding.min.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/globalize.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/globalize/number.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/globalize/currency.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/globalize/date.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/globalize/plural.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/require/text.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/cldr.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/cldr/event.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/cldr/supplemental.js", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/MVC/Content/fonts/fontawesome-webfont.woff2?v=4.4.0", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/favicon.ico", "Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/search/dropdown_arrow.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/Images/Icons/AboutTypes/IconSprite.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/Images/ajaxloader_small.gif", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/MVC/Content/images/bits/ddl.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/Images/ajaxloader_small_square.gif", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/MVC/Content/Images/icons/search/dropdown_arrow.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/MVC/Content/images/select2.png", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/MVC/Content/js/External/Kendo/styles/Uniform/sprite.png", "Referer=https://staff.belflex.com/MVC/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		"Url=/MVC/Content/js/External/Kendo/styles/Uniform/loading-image.gif", "Referer=https://staff.belflex.com/MVC/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		LAST);

	web_convert_param("ctl00_radStylesheetManager_TSSM_URL1",
		"SourceString=ctl00_radStylesheetManager_TSSM",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		LAST);

	web_url("LocalizationModel", 
		"URL=https://staff.belflex.com/Mvc/Localization/LocalizationModel", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
  
 
	lr_end_transaction("1_Invoke App",LR_AUTO);

	lr_start_transaction("02_login");

	web_reg_find("Text=Dashboard", LAST);
	web_submit_data("Login.aspx_2",
		"Action=https://staff.belflex.com/Login.aspx?ReturnUrl=%2f",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t17.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=__LASTFOCUS", "Value=", ENDITEM,
		"Name=ctl00_radStylesheetManager_TSSM", "Value={ctl00_radStylesheetManager_TSSM}", ENDITEM,
		"Name=ctl00_radScriptManager_TSM", "Value=;;System.Web.Extensions, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35:en-US:92dc34f5-462f-43bd-99ec-66234f705cd1:ea597d4b:b25378d2;Telerik.Web.UI, Version=2013.1.220.40, Culture=neutral, PublicKeyToken=121fae78165ba3d4:en-US:d8ebf3de-0179-4fa4-89e6-a030e0cf94a1:16e4e7cd:ed16cbdc:874f8ea2:f7645509:24ee1bba:f46195d3:19620875:39040b5c", ENDITEM,
		"Name=__EVENTTARGET", "Value=", ENDITEM,
		"Name=__EVENTARGUMENT", "Value=", ENDITEM,
		"Name=__VIEWSTATE", "Value={AspNet_ViewState}", ENDITEM,
		"Name=__VIEWSTATEGENERATOR", "Value={__VIEWSTATEGENERATOR}", ENDITEM,
		"Name=ctl00$hidNewLayoutName", "Value=", ENDITEM,
		"Name=ctl00_tipPhoneNumber_ClientState", "Value=", ENDITEM,
		"Name=ctl00$cphMain$logIn$UserName", "Value=dynatrace@erecruit.com", ENDITEM,
		"Name=ctl00$cphMain$logIn$Password", "Value=Apple2020!", ENDITEM,
		"Name=ctl00$cphMain$logIn$Login", "Value=Log In", ENDITEM,
		EXTRARES,
		"URL=/ScriptResource.axd?d=44SGZo2TqL-tI83tWSKG8qKB9UZnvLKDSxUi-NIFy3yxTKJqxSWjJszXi7N5Vq2I-pDh4lzE2aedAgysznkiqQmFF8CPdPqk-e3lCPim0zvTyyQ5iVh_MbUxPwADjrlT_DYlqg0MQqXdscQsjTsKLnAFymmFL5Mei2yq6piAErmURXsI0&t=ffffffffecf19baa", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/ScriptResource.axd?d=EFBgsmtsU0pdW_GJ6_OLMOrpZnHX-DWOrBZ7HrzZ8BxeBZf6YnNWFzULdDmVnk70LtTO4gZ_GyqSkGD95bPbJwgHe11fjxzISOEzOaL5e0drVbOMzhrLbjDWCA35mcSvn7z-MyNf7pU_iUvtiyL7sgvvlP0Z6zAimtFRWZkedUYXrqEu0&t=ffffffffecf19baa", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/ScriptResource.axd?d=nM7jnaDKzh8r0qooI-UZcLRDfwSRG7XKH8vedy3aww5zKlTICQoAd64X1JVcMK5p2ivHIp3YFOQqqCc9D3cjUDMw1_brU7KlI8W5eh6R7iwppIAov5f1J9QUTJQuFYeh79_qyA2&t=3967d01", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/ScriptResource.axd?d=YN85L9yCqHa46htTwACglZBRKHzwPIpqenx2u72M76RQV_y-pwroGZmbSjFPIkTs7VklX_g4cX7dI8TxvvPZ_oP9C1u3utgsyFoRaLMXklAUFpGoHUSepS8YO0p2X4rI_CPCoXF81NlH1Qse3Vm6Pj8RLWc1&t=3967d01", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/ScriptResource.axd?d=OPUKgPGoeoBBrUdA2DMmoomsFtTsVq7K1ejHgdz4UfE45IXBH_Oh6eu4jGVBwMUhMdXN3LyWI3NliLXRxx_sT3zg8gapIEImnnyughuGO39GyMKfdvffTxQjaHhtLkSrYhu3Lw241Pp2RzG5yvQS1gesBqY1&t=3967d01", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/ScriptResource.axd?d=MFXKNQ8ab_LEQJ6hHeptPLbDgUby09PE2PQ5-iasaA4Mb6j84cjUM6hvPXK7V0csracmME3AcOt51Yu1PvN7MlpI0rhQv48pTd2dPbJrVfw1UzZdO6nh6QF8jd-A1JSmtQuzA-x7vzhb6jQ_2Gx8-UAlJGA1&t=3967d01", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/ScriptResource.axd?d=-zZOk8-NgGZhYzHzZuTKA2_9EbckOn7KTEpbivPPfxQqqi6BwtvEVAeHw5XD8-e5FNyTcWEj91fUvzVvwqxsDkSBDLxyplONQSelOh_IWQovz_thK1qigzaD8MTuVSKZoOvL_8R8LAFqU8pgKDpFNP-tnl81&t=3967d01", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZyzLyA-0LowYjLVb16-AkIy2bI1v8JCMtpaBTWiQU", ENDITEM,
		"URL=/Mvc/Content/Images/icons/refresh.png", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Logout.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/Mvc/Content/Images/icons/14/cross.png", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,  
		"URL=/MVC/Content/js/Notifications/Notifications.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Frame/ShortcutManager/AddShortcutCommand.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Frame/TopMenu/TopMenu.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/External/jQuery-plugins/jquery.modal.min.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Frame/ShortcutManager/ShortcutManager.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Controls/Base.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/External/jQuery-plugins/menu-aim.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Frame/TopMenu/Items.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Frame/ShortcutManager/ShortcutAliases.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Frame/container.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Localization/ResourceKeys.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/BL/ScheduledItem/SearchSidebarButtons.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Controls/Popup.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Search/interfaces.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Controls/InfoBox.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/require/css.min.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/BL/ScheduledItem/Templates/SearchSidebarButtons.css", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Controls/stylesheet.js", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM,
		"URL=/Mvc/User/CheckExpiration", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM, 
		LAST);

	web_url("Recruiter.aspx", 
		"URL=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Telerik.Web.UI.WebResource.axd?_TSM_HiddenField_=ctl00_radScriptManager_TSM&compress=1&_TSM_CombinedScripts_=%3b%3bSystem.Web.Extensions%2c+Version%3d4.0.0.0%2c+Culture%3dneutral%2c+PublicKeyToken%3d31bf3856ad364e35%3aen-US%3a92dc34f5-462f-43bd-99ec-66234f705cd1%3aea597d4b%3ab25378d2%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
		"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a16e4e7cd%3aed16cbdc%3a874f8ea2%3af7645509%3a24ee1bba%3af46195d3%3a19620875%3a39040b5c%3a854aa0a7%3a607498fe%3a9cdfc6e7%3a7165f74", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM,  
		LAST);

	web_custom_request("6170", 
		"URL=https://staff.belflex.com/MVC/Dashboard/Tasks/View/6170", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("23953", 
		"URL=https://staff.belflex.com/MVC/Dashboard/CompanyFlashReportTemp/View/23953", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("6171", 
		"URL=https://staff.belflex.com/MVC/Dashboard/Opportunities/View/6171", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583874976266", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);

	web_custom_request("6172", 
		"URL=https://staff.belflex.com/MVC/Dashboard/MyOpenPositions/View/6172", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("10057", 
		"URL=https://staff.belflex.com/MVC/Dashboard/ScheduledItemCalendar/View/10057", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("6173", 
		"URL=https://staff.belflex.com/MVC/Dashboard/ScheduledItemCalendar/View/6173", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("6174", 
		"URL=https://staff.belflex.com/MVC/Dashboard/PlacementsEndingSoon/View/6174", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583874976267", "Referer=https://staff.belflex.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM,  
		LAST); 
 
	lr_end_transaction("02_login",LR_AUTO);

	return 0;
}
