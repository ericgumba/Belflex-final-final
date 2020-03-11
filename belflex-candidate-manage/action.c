Action()
{
 

	web_set_sockets_option("SSL_VERSION", "2&3");
  

	lr_start_transaction("1_Drill Into Candidate");

	web_url("manage.aspx", 
		"URL=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t535.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Telerik.Web.UI.WebResource.axd?_TSM_HiddenField_=ctl00_ctl00_radScriptManager_TSM&compress=1&_TSM_CombinedScripts_=%3b%3bSystem.Web.Extensions%2c+Version%3d4.0.0.0%2c+Culture%3dneutral%2c+PublicKeyToken%3d31bf3856ad364e35%3aen-US%3a92dc34f5-462f-43bd-99ec-66234f705cd1%3aea597d4b%3ab25378d2%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
		"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a16e4e7cd%3aed16cbdc%3a874f8ea2%3af7645509%3a24ee1bba%3af46195d3%3a19620875%3a39040b5c%3a6a6d718d%3ae330518b%3a1e771326%3a8e6f0d33%3a7165f74", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		LAST);

	web_custom_request("addrecent", 
		"URL=https://staff.belflex.com/api/bookmark/addrecent", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t536.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"abouttypeid\":6,\"referenceid\":{refId},\"name\":\"Kandasamy Java/j2ee Developer ({refId})\",\"userinfo\":\"%7b%22UserID%22%3a%2208b5c73d-8e4d-467c-82be-0c6789f8f6a5%22%2c%22EntityID%22%3a%2200000000-0000-0000-0000-000000000e01%22%2c%22LoggedInAsMode%22%3a1%2c%22TimeZone%22%3a%22Eastern+Standard+Time%22%7d\"}", 
		LAST);

	web_custom_request("GetWidgetWithSession", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidgetWithSession", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t537.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'tags/tags','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":{refId},\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"undefined\"}'}", 
		LAST);
 
 
 
  
 

	web_custom_request("GetWidget_8", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t546.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'contactmethods','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":{refId},\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"%7B%20%27Name%27%3A%20%27Kandasamy+Java%252fj2ee+"
		"Developer%27%2C%20%27Email%27%3A%20%27%27%2C%20%27Address%27%3A%20%27eyJDb21tdW5pY2F0aW9uVHlwZSI6NDAwLCJTdGF0ZUNvZGUiOiJHQSIsIlN0YXRlTmFtZSI6Ikdlb3JnaWEiLCJDb3VudHJ5TmFtZSI6IlVuaXRlZCBTdGF0ZXMgb2YgQW1lcmljYSIsIlJlZ2lvbk5hbWUiOiIiLCJDb21tdW5pY2F0aW9uVHlwZUlkIjo0MDAsIk5hbWUiOiJNYWluIEFkZHJlc3MiLCJBZGRyZXNzSUQiOjYyNzI3ODUsIkFkZHJlc3NMaW5lMSI6IiIsIkFkZHJlc3NMaW5lMiI6IiIsIkNpdHkiOiJBbHBoYXJldHRhIiwiU3RhdGVJRCI6MTUsIkNvdW50cnlJRCI6MjIwLCJQb3N0YWxDb2RlIjoiMzAwMDQiLCJSZWdpb25JRCI6bnVsbH0%253d%27%2C%20%27A"
		"ddressID%27%3A%206272785%2C%20%27NrOfAddresses%27%3A%201%20%7D\"}'}", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/apps/linkedin.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/disk.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/arrowjoin.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/position.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/task_add.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/check.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/printer.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		LAST);

	web_custom_request("ManageCandidateAccrualSchedules", 
		"URL=https://staff.belflex.com/MVC/CandidateAccrualSchedule/ManageCandidateAccrualSchedules?candidateID={refId}", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t547.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=utf-8", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/phone.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583777059215", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/sms.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/80.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/260.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/8.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/requirements.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/match.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/20.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/attachment.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/paid.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/270.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/12.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/candidatereference.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/3.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/email_ok.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/email_nok.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/phone_ok.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/phone_nok.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/sms_ok.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/sms_nok.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/print.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		LAST);

	web_custom_request("GetWidget_9", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t548.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'address/address','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":{refId},\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Address%27%3A%20%27eyJDb21tdW5pY2F0aW9uVHlwZSI6NDAwLCJTdGF0ZUNvZGUiOiJHQSIsIlN0YXRlTmFtZSI6Ikdlb3JnaWEiLCJDb3VudHJ5TmFtZSI6IlVuaXRlZCBTdGF0ZXMgb2YgQW1lcmljYSIsIlJlZ2lvbk5hbWUiOiIiLCJDb21tdW5pY2F0aW9uVHlwZUlkIjo0MDAsIk5hbWUiOiJNYWluIEFkZHJlc3MiLCJBZGRyZXNzSUQiOjYyNzI3ODUsIkFkZHJlc3NMaW5lMSI6IiIsIkFkZHJlc3NMaW5lMiI6IiIsIkNpdHkiOiJBbHBoYXJldHRhIiwiU3RhdGVJRCI6MTUsIkNvdW50cnlJRCI6MjIwLCJQb3N0YWxDb2RlIjoiMzAwMDQiLCJSZWdpb25JRCI6bnVsbH0%253d%27%2C%20%27AddressID%27%3A%206272785%2C%20%27NrOfAddr"
		"esses%27%3A%201%20%20%20%7D\"}'}", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/positionmatching.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/tax.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/time.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		LAST);

	web_custom_request("GetWidgetWithSession_3", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidgetWithSession", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t549.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'communicationlist','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":{refId},\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"%7B%20Mode%3A%20%27Sidebar%27%2C%20%27Email%27%20%3A%20%27%27%2C%20%27FullName%27%20%3A%20%27Kandasamy%20Java%252fj2ee%20Developer%27%20%20%7D\"}'}", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/date.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/form.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/OnboardingIntegration/OnboardingMenu.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/RightBarSettings/RightBarSettings.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/MVC/Content/js/Base/autobind.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/edit.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/MVC/Content/js/Controls/Help.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/info.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/house.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/14/edit.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/14/houses.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/14/link.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/profile.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/communicationtypes/3.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/communicationtypes/2.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/communicationtypes/7.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/communicationtypes/1.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		LAST);

	web_url("OnboardingMenu.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/OnboardingIntegration/Templates/OnboardingMenu.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t550.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Help.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/Help.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t551.inf", 
		"Mode=HTML", 
		LAST);

	web_url("InfoBox.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/InfoBox.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t552.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Base/dataSource.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=../Select.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/OnboardingIntegration/interfaces.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Awr/BreakInServiceLog.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Awr/QualifyingPeriodCounter.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/api/onboarding/AllCancellationReasons?OnboardingType=1", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		LAST);

	web_custom_request("get", 
		"URL=https://staff.belflex.com/Mvc/userSettings/get", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t553.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"RightBar.notes_sectioncontact_sectionrelated_sectionactions_sectionother_section\",\"ContainerID\":\"RightBar.SectionsOrder\"}", 
		LAST);

	web_url("BreakInServiceLog.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Awr/Templates/BreakInServiceLog.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t554.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/Tags/TagsView.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		LAST);

	web_url("QualifyingPeriodCounter.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Awr/Templates/QualifyingPeriodCounter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t555.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/Candidate/CandidateReview.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		LAST);

	web_custom_request("get_2", 
		"URL=https://staff.belflex.com/Mvc/userSettings/get", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t556.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"RightBar.notes_sectioncontact_sectionrelated_sectionactions_sectionother_section\",\"ContainerID\":\"RightBar.CollapsedSections\"}", 
		EXTRARES, 
		"Url=/MVC/Content/js/Search/EmbeddedSearch.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		LAST);

	web_url("TagsView.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Tags/Templates/TagsView.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t557.inf", 
		"Mode=HTML", 
		LAST);

	web_url("TagsGridCell.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Tags/Templates/TagsGridCell.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t558.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/Awr/Events.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		LAST);

	web_url("CandidateReviewsList.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Candidate/Templates/CandidateReviewsList.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t559.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/Tags/common.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Tags/TagView.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/MVC/Content/js/External/Knockout/knockout.mapping-latest.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/MVC/Content/js/Currency/CurrencyService.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/MVC/Content/js/Values/Types/CLR/numericType.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		LAST);

	web_url("TagView.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Tags/Templates/TagView.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t560.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Currency/CurrencyModel", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/currency/forLookup-all", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/delete.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/MVC/Content/js/Search/SearchResults.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/CandidateReview/GetByCandidateId/?id={refId}", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		LAST);

	web_url("SearchResults.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/SearchResults.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t561.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../Criterion.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=../LiveFilterService.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		LAST);

	web_url("Criterion.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/Criterion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t562.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/External/Kendo/js-debug/kendo.web.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Search/Awr/By/BreakInService?candidateID={refId}", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Search/Awr/By/QualifyingPeriodCounter?candidateID={refId}", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=../Components/Columns.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		LAST);

	web_url("Columns.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Components/Templates/Columns.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t563.inf", 
		"Mode=HTML", 
		LAST);
 
	lr_end_transaction("1_Drill Into Candidate",LR_AUTO);

	lr_start_transaction("1_Add Note");
 
	web_custom_request("GetWidgetWithSession_4", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidgetWithSession", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t573.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'referencelist','data':'{\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%20AllowEdit%3Atrue%2C%20CallerID%3A%20%27notereferences_manageScheduledItemWidget_773426%27%2C%20StartingReferences%3A%20%27%255B%257B%2522AboutType%2522%253A6%252C%2522ReferenceID%2522%253A%2522{refId}%2522%252C%2522IsPermanent%2522%253Atrue%252C%2522Name%2522%253A%2522Kandasamy%2520Java%252Fj2ee%2520Developer%2522%257D%255D%27%7D%20\"}'}", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/abouttypes/7.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/2.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/scheduleditemtypes/110.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/ScheduledItem/DistributionListValues", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/MVC/Content/images/bits/jqueryui/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/MVC/Content/images/bits/jqueryui/ui-bg_glass_65_ffffff_1x400.png", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/MVC/Content/images/bits/jqueryui/ui-bg_glass_75_e6e6e6_1x400.png", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/priorities/2.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/arrowright.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/arrowleft.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/bullet_delete.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", ENDITEM, 
		LAST); 

	    
	lr_start_transaction("1_candidate notes");

	web_url("LoadUserControl.aspx", 
		"URL=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Notes", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t1548.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../Services/LookupService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Notes", ENDITEM, 
		"Url=../Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Notes", ENDITEM, 
		"Url=../Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Notes", ENDITEM, 
		"Url=../MVC/Content/js/BL/Note/NotesList.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Notes", ENDITEM, 
		LAST);
 

	web_custom_request("set_8", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Notes", 
		"Snapshot=t1563.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Note.Embedded\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"CreatedBy\",\"DateCreated\",\"Action.Id\",\"AboutItem\"],\"RecentParameters\":[]}}", 
		LAST);

	/* Shared */

	lr_end_transaction("1_candidate notes",LR_AUTO);

	lr_start_transaction("1_Candidate Skills");
    web_reg_find("Text=Software", LAST);

	web_url("LoadUserControl.aspx_2", 
		"URL=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Skills", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t1564.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../ScriptResource.axd?d=VquIpJopB8WdSAujtTNDllRpkw1mpzaqK72opZqY0h1xT_OFF0vA1wL4CzbxwgyJq0hFEd6waxhfjnWW-BvBqxz_wD-j00FjwVAWLNpmiJ_olAIcVDBNeWg5sICHyH1aH9QmFIwS6nJbVFs3KnKFR8CTA0RoeoaWUGzCDP0g41ymE0Hh0&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=k9Zd5Mv7tH4b-TGUAcGiMUeZJRQ5y_NdLXF9K7Zd1Pgo_QdyQE8Supvfqms-Xbl1xGlPN2HQ5DJanWCFHiVHwvQEjw16eskpWYNK1RZF0_8VqUR3Jb9H5R1rRDQ4OLAVE3d7fA2&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=dmjnQMHQMm7NaDH95Wh5Y1IKEhO6aFhHU2D9KgmCr2iVXPsrB4nb793ypKhLi53dWPZiX4KAVaj1YwCZsv2dI563kvQJBjxALy900OC1yHIyjGrj6g2hU3RyKBEJrSWtPmMNnxwozm9Cu7oKoV1CzWVTDWDdPbx_826kqkyagyVoBKBv0&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=89cyUC7OOiuHXPMVTWesFKVvDYVab8lNiT2DxciPaPsm0V-bFbOmrm7cLMjPCJHeTIIy1TdGlxE9PFgaHhyoUSXw89XZlo-Rj3870_BemTBOOLt_2VeI3rpj9ydpEVXaLHC25TMXHReKF3VkLXw0d3mNcW01&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=MSyFMy1cYzlATtau9NY94jaI2InpdyIqJF5YvPweeQjnmfw1i7_slIWj32fjl--QA7QICaWVTFPwxOq2nTV9XMZAMMaF6-HK5X4Q9gUhBO5ooxSEpzLZcamy9AYJTE6I4hjW9NYsEuK7mBJdWeZhszaUkfQ1&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=8fyBX1N3F6Fxh_wpDJVDq992YGqGLQ8eDMUCeQVUQJV9jFK09depyPEj2xbAgyeKZYiWucXm93Gru_wy0RVxd-mdzv6BCZri2le-CTsPOKoBjeV6GlRw4XJUEhDusYO4WPpS1n-FcbeOuBrKQgou5BpT7B01&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=AylIygQIaxjqL9fSaLIGsAIWNWhTFchELyXC2tshsI2m-YEIOJXqrtAoSiONSYCDmJvDYb13LVFubUCrmp9XruulYTM5F30jaaafMXikVEKieAqJF2WVQz3tj5mqI4KEb1h88eUZHMZo0WccZ4kJh5qe9eg1&t=596f116c", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=LwbTHUwgxB-ax1QLgGvGIYdf42hG9K9vsulhB6lI6nZJfA7BjE746M4iHhA4i4jA7jLxd8XCEzXUWujrnXIJD-8iC5TZlatn4l_clm2QWqnlGi0hjCtKErNlQmaJLewOIirscwYe0OQ4RwZW85eaO1oJ7B9tHrnZ6SHAqWASMTbLPEW_0&t=596f116c", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=c_z8PZJKUZrgSZIrx1IoPJMXIl9nhNeiQo6sUXVJho-mo6FtwCkQZahQBGzwQa6SvtL4xddvkJwYuYc3ZScaS6bqKGdV5Nd-Sn4zuHaiXMjFZ_eObyA_HpTlTMUt2dN61DoDjWrDwukumkOO8avCDHCG3aaPtx42vLlu7WfU5K4eqvdq0&t=596f116c", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=L_Iit2Ph_5Df1Gw1vih333fB_yN2disFiRulDSFBTdpHWq5SVvwlqkiUqyEW8jECfWCv7ovgW0HIvs78sq6-fgiNnkU_oMDnp4FtefN1IueJda0tD7aGHamZ9zZpxWkhho4eSBEUJzGrxCwpuDXY2thPChs1&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Skills", ENDITEM, 
		"Url=../Services/LookupService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Skills", ENDITEM, 
		"Url=../Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Skills", ENDITEM, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZDtSRCLNB4U4jLTSANwQkIy2C9BEvJCMtqv5jbCQU", "Referer=", ENDITEM, 
		"Url=../Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Skills", ENDITEM, 
		"Url=../Mvc/Content/Images/bits/bg_sectionmenu.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		//"Url=../mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583819190115", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM, 
		LAST);

	/* Software */

	lr_end_transaction("1_Candidate Skills",LR_AUTO);

	lr_start_transaction("1_Candidate Industries");
    web_reg_find("Text=Folder Groups", LAST);
	web_url("LoadUserControl.aspx_3", 
		"URL=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=FolderGroupsNew", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t1565.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../Services/LookupService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=FolderGroupsNew", ENDITEM, 
		"Url=../Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=FolderGroupsNew", ENDITEM, 
		"Url=../Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=FolderGroupsNew", ENDITEM, 
		LAST);

	web_custom_request("{refId}", 
		"URL=https://staff.belflex.com/MVC/Industries/List/6/{refId}/", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=FolderGroupsNew", 
		"Snapshot=t1566.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("{refId}_2", 
		"URL=https://staff.belflex.com/MVC/FolderGroups/List/6/{refId}/", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=FolderGroupsNew", 
		"Snapshot=t1567.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583819527890", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=FolderGroupsNew", ENDITEM, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583819527891", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=FolderGroupsNew", ENDITEM,  
		LAST);
 

	lr_end_transaction("1_Candidate Industries",LR_AUTO);

	lr_start_transaction("1_Candidate Position Matching");
 
	lr_end_transaction("1_Candidate Position Matching",LR_AUTO);

	lr_start_transaction("1_Candidate_Click_Tax");

    web_reg_find("Text=Tax Information", LAST);
	web_url("LoadUserControl.aspx_4", 
		"URL=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Tax", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t1568.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../ScriptResource.axd?d=JnDN5slnA9RHTR3pPsgejTuQcoKT_ZgDn49I93gHl6yqfheoIZKOckjvLQkjgZ3YyOErBxZTYvGOgoyCqKnwBMR_B7TtgakJQZm5migZzPnevelUDunwbvf94HqiHN-Oa4n-uhW1Ywpm-5-xOY4PHued-lU1&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Tax", ENDITEM, 
		"Url=../ScriptResource.axd?d=jjmSxgSpc8B1YXDOS4WJjKKZWa8lucy6aucfaamVZmpwTq1diWzTDCMJa6u92aydkX1Nuzkjx6yDg7ToHvvSndr1c1TS55BcVqqZHOpNZ6qQHvWDrYytmaBZmzmZHaQM9jDNcGqewdsB5bEiOy-xkjx6x9hhgpdxbWQNZaD7abhowGhY0&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Tax", ENDITEM, 
		"Url=../ScriptResource.axd?d=6Ze7HZFJPB6mTsk4quIGV7tCSwJtCmiwyvZ0IQ676EHW3pRe357aa1IyOgLN6_B-7pRstwKZPCVYzkR62X4G7lxht8_EAXfe-_Yr2JRH908XzMa71jnSY6teflZHcP0PCFwICv35rnG0G27gjTtYg7AT5CeI13Bkutm8J5P4VZ4u8VV30&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Tax", ENDITEM, 
		"Url=../ScriptResource.axd?d=e97Vl9D4HvAXaL03oNDWKDOtN0RyeGw3X7s9ZqxhykeRUcBWkTzFIGve2twZZky6GZ77wd9Wu7Vp_nMOFEB4Wskzo0tQfWrL5_uWVGZPQq40KrF1wRr04fc-FOAacSkjv5ec5Run3VLjJafAPfaFiLRvG241&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Tax", ENDITEM, 
		"Url=../ScriptResource.axd?d=vypF8dSlmNUaAEoY94yJgVMbdhu1Pt36kUPbgu32V2AoitsRJ1KHbD7vgy2Zpj0dlBpaPSqvF6Urq0cMVfz2iIv4Z2BEL2FhElXpDK2akfTPqOgPtJ-MMWI0yIBj8f5KTSNd96ak9gOaf1HZnVPOPwSo9s3069pHeaKqkNMmIj_hLhCQ0&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Tax", ENDITEM, 
		"Url=../ScriptResource.axd?d=My2a2YthW1W1cW4tceHH_EN9vdGWZRG06N0Flyn-ltA71B3zxmF-9eOWnI3MiPB5eycbOkZLelVd_hjRhKz5pVaso_pS40oAh0dfN50XqpuUKzvxdDJ3j2bCTupPt7oXz5-ADMNNWTWJIp2dwM102YmldA3dScqdk5VTj_y5DrPuUiNQ0&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Tax", ENDITEM, 
		"Url=../ScriptResource.axd?d=b7Bgzqo29eh9a_hhQcDIDZRXEn3GN_PUewEWE2AsEvQ5_d_RsansZ7WnpepGbIIdLoovSzXEBiW3IceZr1kSMHf5A2KA_-l1Q1E-W4dpq95q5FkdViGui40F2YPtoovby7jiEZl1BqUiTlGb63_B-t_7YYQ1&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Tax", ENDITEM, 
		"Url=../ScriptResource.axd?d=Xl5lWc6sg17n98PdwjAOomKQd4z3i8Orm4bfnB_RVdnMKxkr0YwVTLxW50q1B2iHWH8GPiiMGZ4ZMhGkkHn14oj3HcL3nJHyALhL8H1YKlt1-2FZ-nc0vDzMb3T3OPW25xmlt5X1sYH7ttImIVKmxoYjc2ts5MQ_1JKzHCI_Ii7fGUB70&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Tax", ENDITEM, 
		"Url=../Services/LookupService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Tax", ENDITEM, 
		"Url=../Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Tax", ENDITEM, 
		"Url=../Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Tax", ENDITEM, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZuytbKzxptXcjLf0wy4EkIy2AzuzwJCMtMRIi9yQjLQPJyBQkIy0dJbndJCMtCXdQLCQjLR9pkKIkIy0UaAXqJCMtiwtzuSQjLYT9b8okIy23_aJ7JCMtYrIP8yQjLdeSeEkkIy0AxUKyJCMt07yw2CQjLVc3aE4kIy3VtOgtJCMtHhJ1SiQjLf6fJ1gkIy0mKJttJCMtJkuZ8yQjLeIgaoMkIy1yCyVUJCMts-my0iQjLd1WWmckIy0qIWTQJCMtYvrjaCQjLToSf70kIy0Z6pLRJCMtyHm3piQjLUg_YcUkIy3PWUwlJCMtnUnVOiQU", "Referer=", ENDITEM, 
		"Url=../MVC/Content/js/BL/Candidate/DirectDepositType.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Tax", ENDITEM, 
		LAST);
 

	web_custom_request("all", 
		"URL=https://staff.belflex.com/Mvc/DirectDeposit/all", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=Tax", 
		"Snapshot=t1571.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"page\":0,\"candidateID\":\"{refId}\"}", 
		LAST);
 
	lr_end_transaction("1_Candidate_Click_Tax",LR_AUTO);

	lr_start_transaction("1_Candidate_Click_Schedule");
    web_reg_find("Text=Add availability", LAST);
	web_url("LoadUserControl.aspx_5", 
		"URL=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=CandidateSchedule", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t1572.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../ScriptResource.axd?d=Cz2OeGZKBXcMZqlNyOpl7B0i3WfueRLbY6qcVysAmA-LtOuCTO5eot_uAKVhpMQwp0T2HY0fSy26kJBTlbKHCMzzgTQYrHCdr7XQHNo0P7vlDQyXJFjx_frKBnon1BY-rCjFojm7ZU8K511IF5qWmmvCPuY1&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=CandidateSchedule", ENDITEM, 
		"Url=../ScriptResource.axd?d=tbe5Hb8yw16_2I_c5IRIvbUVEwmSqGGUK5RiPUMoM2OOumoqre3b1POxbsyPG2MlVae4FVlA_HltVNWcBu0cl0CW8yuzi5sAJlQWKj8X4swFUyJlLWUK6bv9qAlVAroswOd16ZoTok8sWKbrDYvTXR-amCvQQkj2lMOCqpMTeGd8hOsA0&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=CandidateSchedule", ENDITEM, 
		"Url=../ScriptResource.axd?d=MPbOEJwkb_ucDwCytB7Fpib4r8N0tX5DGCcZHNrkZYQdlSQ3TOLzl1Gn2Zrl84jRxvNnFRyVy0dae4b9uiesxEkmyUKgDfbc2GK133D1gYjB-wX3hqt9IGA349qPk8-HQRg2fljiaJfgzkmJp4SAKueLNc81&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=CandidateSchedule", ENDITEM, 
		"Url=../ScriptResource.axd?d=ewMBSKGe-_nKF5NkR_hBVPyiAAv_vQlnhVJxsO3CuHpc_Y3SVcFAA-k1B8F6S9VcZgbL29jW25Da1KCgoaxQoezo2ZxBVIUxOMNbrZq5YIfZD7CC7U_UA6LDHZkNAw9pKtzPj5owQD5TICUfR0jRy9IwRb22rNKGRGGVO4g4RpGl4ZcZ0&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=CandidateSchedule", ENDITEM, 
		"Url=../Services/LookupService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=CandidateSchedule", ENDITEM, 
		"Url=../Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=CandidateSchedule", ENDITEM, 
		"Url=../Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=CandidateSchedule", ENDITEM, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZyF3oECSR_qsjLW_gK-AkIy1ChKosJCMtIKuigiQjLY0NWlMkIy3M7vD2JCMtkJqoPSQjLdZtlpUkIy0_Zw06JCMt_-e9ZCQjLUN0Jq4kIy2FxPubJCMtK9WO6iQU", "Referer=", ENDITEM, 
		"Url=../Mvc/Content/Images/calendarscheduling.gif", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=../WebResource.axd?d=J3IVMxpdATZZweonZP1zyM24t7D1abNl5W_3-hkFMjs0Duq20NaTlgzCchPpFr0KCkxh0P19-DBqo7cRkcbX8Yi-Tr2TmrbzXUsyuVXbVOkgB82_4lAVaBZQU7aTcVwazdxc3BxRHkQ-siMF2aCufjosjzZyEbx8CXKh_2DP62mzL6Gk0&t=635004147360000000", "Referer=https://staff.belflex.com/WebResource.axd?d=XO4BcZalKwaX00FgIvbXwgPPKwm0d5tpg-VWWhT2ka6XGxXKEvUiq1ubRE_QYIb8n5gfLyrjDkcjIGoTXvNnvaZ46OIrkivMLe4hCaFAflgyfasHPRUbGR56D_oYaNkMGKvc9QOEOnRQutJtP1f_GWgGGEBIYAncjO-toNPlY_bnr1mp0&t=635004147360000000", ENDITEM, 
		LAST); 
	lr_end_transaction("1_Candidate_Click_Schedule",LR_AUTO);

	lr_start_transaction("1_Candidate_Click_History");
    

	web_url("LoadUserControl.aspx_6", 
		"URL=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid={refId}&null", 
		"Snapshot=t1573.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../Services/LookupService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", ENDITEM, 
		"Url=../Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", ENDITEM, 
		"Url=../Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", ENDITEM, 
		LAST);

	web_custom_request("GetWidgetWithSession_5", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidgetWithSession", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", 
		"Snapshot=t1574.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'aboutitemhistory','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":{refId},\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"undefined\"}'}", 
		EXTRARES, 
		"Url=/MVC/Content/images/bits/jqueryui/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/MVC/Content/images/bits/jqueryui/ui-bg_glass_75_e6e6e6_1x400.png", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/MVC/Content/images/bits/jqueryui/ui-bg_glass_65_ffffff_1x400.png", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/MVC/Content/js/Audit/AccessLog.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", ENDITEM, 
		"Url=/MVC/Content/js/Audit/ChangeHistory.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", ENDITEM, 
		"Url=/MVC/Content/js/Audit/StatusTransitions.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", ENDITEM, 
		"Url=/MVC/Content/js/Audit/Templates/ChangeHistory.css", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", ENDITEM, 
		LAST);

	web_url("AccessLog.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Audit/Templates/AccessLog.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", 
		"Snapshot=t1575.inf", 
		"Mode=HTML", 
		LAST);

    web_reg_find("Text=Change History", LAST);
	web_url("ChangeHistory.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Audit/Templates/ChangeHistory.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", 
		"Snapshot=t1576.inf", 
		"Mode=HTML", 
		LAST);

	web_url("StatusTransitions.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Audit/Templates/StatusTransitions.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", 
		"Snapshot=t1577.inf", 
		"Mode=HTML", 
		LAST);

	web_url("InfoBox.html_5", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/InfoBox.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", 
		"Snapshot=t1578.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SearchResults.html_4", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/SearchResults.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", 
		"Snapshot=t1579.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Pager.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/Pager.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", 
		"Snapshot=t1580.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Help.html_4", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/Help.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", 
		"Snapshot=t1581.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Criterion.html_4", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/Criterion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", 
		"Snapshot=t1582.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("AccessLog", 
		"URL=https://staff.belflex.com/Mvc/Audit/AccessLog", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", 
		"Snapshot=t1583.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"record\":{\"AboutType\":\"Candidate\",\"ReferenceId\":\"{refId}\"},\"page\":0}", 
		LAST);

	web_custom_request("StatusTransitions", 
		"URL=https://staff.belflex.com/Mvc/Audit/StatusTransitions", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", 
		"Snapshot=t1584.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"record\":{\"AboutType\":\"Candidate\",\"ReferenceId\":\"{refId}\"},\"page\":0}", 
		EXTRARES, 
		"Url=/MVC/Content/images/icons/refresh.png", "Referer=https://staff.belflex.com/MVC/Content/js/Audit/Templates/ChangeHistory.css", ENDITEM, 
		"Url=/Search/Audit/By/History?aboutType=Candidate&referenceID={refId}", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", ENDITEM, 
		LAST);

	web_url("Columns.html_4", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Components/Templates/Columns.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", 
		"Snapshot=t1585.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/SelectFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", 
		"Snapshot=t1586.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.WithExclusion.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/SelectFilter.WithExclusion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", 
		"Snapshot=t1587.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DropDownFilter.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/DropDownFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", 
		"Snapshot=t1588.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../Filters/CheckboxFilter.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", ENDITEM, 
		LAST);

	web_custom_request("set_9", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", 
		"Snapshot=t1589.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.erecruit.Mvc.Search.AuditController+AuditPropertyTransition.Embedded\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"ShowEmptyChanges\"],\"RecentParameters\":[]}}", 
		EXTRARES, 
		"Url=../List/GenericList_nvp?key=entity:User", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", ENDITEM, 
		LAST);

	web_url("CheckboxFilter.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/CheckboxFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", 
		"Snapshot=t1590.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("set_10", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=6&refid={refId}&control=History", 
		"Snapshot=t1591.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.erecruit.Mvc.Search.AuditController+AuditPropertyTransition.Embedded\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"ShowEmptyChanges\"],\"RecentParameters\":[]}}", 
		LAST);
 
	lr_end_transaction("1_Candidate_Click_History",LR_AUTO);
	return 0;
}