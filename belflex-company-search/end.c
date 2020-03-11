vuser_end()
{

	lr_start_transaction("99_logout");

	web_submit_data("default.aspx", 
		"Action=https://staff.belflex.com/Recruiter/default.aspx", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=__EVENTTARGET", "Value=ctl00$btnLogoutRecruiter", ENDITEM, 
		"Name=__EVENTARGUMENT", "Value=", ENDITEM, 
		"Name=__LASTFOCUS", "Value=", ENDITEM, 
		"Name=__VIEWSTATE", "Value=/"
		"wEPDwULLTEwMDUyNjYzMjgQFgIeE1ZhbGlkYXRlUmVxdWVzdE1vZGUCAWQWAmYPZBYGZg9kFgICBA8VAiouLi9NVkMvQ29udGVudC9jc3MvTGlicmFyeS9saWJyYXJ5Lm1pbi5jc3MfLi4vTVZDL0NvbnRlbnQvY3NzL2VyZWNydWl0LmNzc2QCAQ8PFgIeF0VuYWJsZUFqYXhTa2luUmVuZGVyaW5naGRkAgQPZBYMAgkPDxYCHwFoZBYCAgEPZBYCZg9kFgQCAQ8PFgQeB1Rvb2xUaXAFOExvZ2dlZCBpbiBhcyBFcmVjcnVpdCBEeW5hdHJhY2UgKGR5bmF0cmFjZUBlcmVjcnVpdC5jb20pHgRUZXh0BRlMb2dvdXQgRXJlY3J1aXQgRHluYXRyYWNlZGQCAg8PFgIeB1Zpc2libGVoZGQCCw8PFgIfAWhkFgICAQ8WAh8EZxYEZg8WAh8EZ2QCAQ8WAh8EZ2QCDw8PFgIfAWhkZAI"
		"TDxAPFgIfBGdkZBYBZmQCFQ8WAh8EZ2QCFw8QDxYEHgtfIURhdGFCb3VuZGcfBGdkEBUDCGVyZWNydWl0E0ludGVybmFsIFJlY3J1aXRpbmcOVW5pdHkgU3RhZmZpbmcVAyQwMDAwMDAwMC0wMDAwLTAwMDAtMDAwMC0wMDAwMDAwMDBlMDEkMDAwMDAwMDAtMDAwMC0wMDAwLTAwMDAtMDAwMDAwMDAwZTAzJDg1ZTcxNGNkLTNjNDUtNDVjYi04N2VmLTA0NjBiMzgzMzEzMRQrAwNnZ2cWAWZkGAIFHl9fQ29udHJvbHNSZXF1aXJlUG9zdEJhY2tLZXlfXxYFBQ9jdGwwMCR4cG5sQ2FjaGUFEGN0bDAwJHhwbmxIZWFkZXIFFGN0bDAwJHhwbmxUb3BMZWZ0QmFyBQtjdGwwMCRjdGwxMgUQY3RsMDAkeHBubEFsZXJ0cwUPY3RsMDAkbXZ3SGVhZGVyDw9kZmQMlsT+"
		"Gt8xnlKliSNf9grCq/0KOw==", ENDITEM, 
		"Name=__VIEWSTATEGENERATOR", "Value=B430D0AB", ENDITEM, 
		"Name=ctl00$hidEntityID", "Value=", ENDITEM, 
		"Name=ctl00$txtQuickSearch", "Value=", ENDITEM, 
		"Name=ctl00_xpnlHeader_ClientState", "Value=", ENDITEM, 
		"Name=ctl00_xpnlTopLeftBar_ClientState", "Value=", ENDITEM, 
		"Name=ctl00_xpnlAlerts_ClientState", "Value=", ENDITEM, 
		"Name=ctl00$ddlActiveMode", "Value=Recruiter", ENDITEM, 
		"Name=ctl00$ddlActiveEntity", "Value=00000000-0000-0000-0000-000000000e01", ENDITEM, 
		EXTRARES, 
		"Url=../Telerik.Web.UI.WebResource.axd?_TSM_HiddenField_=ctl00_radScriptManager_TSM&compress=1&_TSM_CombinedScripts_=%3b%3bSystem.Web.Extensions%2c+Version%3d4.0.0.0%2c+Culture%3dneutral%2c+PublicKeyToken%3d31bf3856ad364e35%3aen-US%3a92dc34f5-462f-43bd-99ec-66234f705cd1%3aea597d4b%3ab25378d2%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
		"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a16e4e7cd%3aed16cbdc%3a874f8ea2%3af7645509%3a24ee1bba%3af46195d3%3a19620875%3a39040b5c", "Referer=https://staff.belflex.com/Login.aspx", ENDITEM, 
		"Url=../Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Login.aspx", ENDITEM, 
		LAST);

	web_url("LocalizationModel_2", 
		"URL=https://staff.belflex.com/Mvc/Localization/LocalizationModel", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Login.aspx", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("99_logout",LR_AUTO);

	return 0;
}