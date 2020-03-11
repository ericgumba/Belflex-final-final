Candidate_Search_And_Manage()
{
 

	web_set_sockets_option("SSL_VERSION", "2&3");
 
  

	lr_start_transaction("1_Drill Into Candidate");

	web_url("manage.aspx", 
		"URL=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t535.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Telerik.Web.UI.WebResource.axd?_TSM_HiddenField_=ctl00_ctl00_radScriptManager_TSM&compress=1&_TSM_CombinedScripts_=%3b%3bSystem.Web.Extensions%2c+Version%3d4.0.0.0%2c+Culture%3dneutral%2c+PublicKeyToken%3d31bf3856ad364e35%3aen-US%3a92dc34f5-462f-43bd-99ec-66234f705cd1%3aea597d4b%3ab25378d2%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
		"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a16e4e7cd%3aed16cbdc%3a874f8ea2%3af7645509%3a24ee1bba%3af46195d3%3a19620875%3a39040b5c%3a6a6d718d%3ae330518b%3a1e771326%3a8e6f0d33%3a7165f74", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		LAST);

	web_custom_request("addrecent", 
		"URL=https://staff.belflex.com/api/bookmark/addrecent", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", 
		"Snapshot=t536.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"abouttypeid\":6,\"referenceid\":2494772,\"name\":\"Kandasamy Java/j2ee Developer (2494772)\",\"userinfo\":\"%7b%22UserID%22%3a%2208b5c73d-8e4d-467c-82be-0c6789f8f6a5%22%2c%22EntityID%22%3a%2200000000-0000-0000-0000-000000000e01%22%2c%22LoggedInAsMode%22%3a1%2c%22TimeZone%22%3a%22Eastern+Standard+Time%22%7d\"}", 
		LAST);

	web_custom_request("GetWidgetWithSession", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidgetWithSession", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", 
		"Snapshot=t537.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'tags/tags','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":2494772,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"undefined\"}'}", 
		LAST);
 
 
 
  
 

	web_custom_request("GetWidget_8", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", 
		"Snapshot=t546.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'contactmethods','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":2494772,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"%7B%20%27Name%27%3A%20%27Kandasamy+Java%252fj2ee+"
		"Developer%27%2C%20%27Email%27%3A%20%27%27%2C%20%27Address%27%3A%20%27eyJDb21tdW5pY2F0aW9uVHlwZSI6NDAwLCJTdGF0ZUNvZGUiOiJHQSIsIlN0YXRlTmFtZSI6Ikdlb3JnaWEiLCJDb3VudHJ5TmFtZSI6IlVuaXRlZCBTdGF0ZXMgb2YgQW1lcmljYSIsIlJlZ2lvbk5hbWUiOiIiLCJDb21tdW5pY2F0aW9uVHlwZUlkIjo0MDAsIk5hbWUiOiJNYWluIEFkZHJlc3MiLCJBZGRyZXNzSUQiOjYyNzI3ODUsIkFkZHJlc3NMaW5lMSI6IiIsIkFkZHJlc3NMaW5lMiI6IiIsIkNpdHkiOiJBbHBoYXJldHRhIiwiU3RhdGVJRCI6MTUsIkNvdW50cnlJRCI6MjIwLCJQb3N0YWxDb2RlIjoiMzAwMDQiLCJSZWdpb25JRCI6bnVsbH0%253d%27%2C%20%27A"
		"ddressID%27%3A%206272785%2C%20%27NrOfAddresses%27%3A%201%20%7D\"}'}", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/apps/linkedin.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/disk.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/arrowjoin.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/position.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/task_add.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/check.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/printer.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		LAST);

	web_custom_request("ManageCandidateAccrualSchedules", 
		"URL=https://staff.belflex.com/MVC/CandidateAccrualSchedule/ManageCandidateAccrualSchedules?candidateID=2494772", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", 
		"Snapshot=t547.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=utf-8", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/phone.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583777059215", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/sms.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/80.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/260.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/8.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/requirements.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/match.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/20.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/attachment.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/paid.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/270.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/12.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/candidatereference.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/3.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/email_ok.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/email_nok.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/phone_ok.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/phone_nok.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/sms_ok.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/sms_nok.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/print.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		LAST);

	web_custom_request("GetWidget_9", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", 
		"Snapshot=t548.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'address/address','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":2494772,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Address%27%3A%20%27eyJDb21tdW5pY2F0aW9uVHlwZSI6NDAwLCJTdGF0ZUNvZGUiOiJHQSIsIlN0YXRlTmFtZSI6Ikdlb3JnaWEiLCJDb3VudHJ5TmFtZSI6IlVuaXRlZCBTdGF0ZXMgb2YgQW1lcmljYSIsIlJlZ2lvbk5hbWUiOiIiLCJDb21tdW5pY2F0aW9uVHlwZUlkIjo0MDAsIk5hbWUiOiJNYWluIEFkZHJlc3MiLCJBZGRyZXNzSUQiOjYyNzI3ODUsIkFkZHJlc3NMaW5lMSI6IiIsIkFkZHJlc3NMaW5lMiI6IiIsIkNpdHkiOiJBbHBoYXJldHRhIiwiU3RhdGVJRCI6MTUsIkNvdW50cnlJRCI6MjIwLCJQb3N0YWxDb2RlIjoiMzAwMDQiLCJSZWdpb25JRCI6bnVsbH0%253d%27%2C%20%27AddressID%27%3A%206272785%2C%20%27NrOfAddr"
		"esses%27%3A%201%20%20%20%7D\"}'}", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/positionmatching.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/tax.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/time.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		LAST);

	web_custom_request("GetWidgetWithSession_3", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidgetWithSession", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", 
		"Snapshot=t549.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'communicationlist','data':'{\"AboutType\":\"Candidate\",\"ReferenceID\":2494772,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"%7B%20Mode%3A%20%27Sidebar%27%2C%20%27Email%27%20%3A%20%27%27%2C%20%27FullName%27%20%3A%20%27Kandasamy%20Java%252fj2ee%20Developer%27%20%20%7D\"}'}", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/date.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/form.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/OnboardingIntegration/OnboardingMenu.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/RightBarSettings/RightBarSettings.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/MVC/Content/js/Base/autobind.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/edit.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/MVC/Content/js/Controls/Help.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/info.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/house.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/14/edit.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/14/houses.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/14/link.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/profile.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/communicationtypes/3.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/communicationtypes/2.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/communicationtypes/7.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/communicationtypes/1.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		LAST);
 
	web_custom_request("get", 
		"URL=https://staff.belflex.com/Mvc/userSettings/get", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", 
		"Snapshot=t553.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"RightBar.notes_sectioncontact_sectionrelated_sectionactions_sectionother_section\",\"ContainerID\":\"RightBar.SectionsOrder\"}", 
		LAST);
 

	web_custom_request("get_2", 
		"URL=https://staff.belflex.com/Mvc/userSettings/get", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", 
		"Snapshot=t556.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"RightBar.notes_sectioncontact_sectionrelated_sectionactions_sectionother_section\",\"ContainerID\":\"RightBar.CollapsedSections\"}", 
		EXTRARES, 
		"Url=/MVC/Content/js/Search/EmbeddedSearch.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		LAST);
 
	lr_end_transaction("1_Drill Into Candidate",LR_AUTO);

	lr_start_transaction("1_Add Note");

	web_url("ManageScheduledItem.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/ScheduledItem/Templates/ManageScheduledItem.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", 
		"Snapshot=t565.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Controls/DateTimePicker.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/MVC/Content/js/Controls/Editor.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		LAST);

	web_url("DateTimePicker.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/DateTimePicker.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", 
		"Snapshot=t566.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/User.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Tags/TagsSelector.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Tasks/Sharing.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/ScheduledItem/ScheduledItemModels.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/ScheduledItem/ChoosePeople.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		LAST);

	web_url("TagsSelector.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Tags/Templates/TagsSelector.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", 
		"Snapshot=t567.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ChoosePeople.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/ScheduledItem/Templates/ChoosePeople.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", 
		"Snapshot=t568.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Search/Filters/SelectFilter.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		LAST);

	web_url("SelectFilter.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/SelectFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", 
		"Snapshot=t569.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.WithExclusion.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/SelectFilter.WithExclusion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", 
		"Snapshot=t570.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Controls/MultiSelect.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		LAST);

	web_url("MultiSelect.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/MultiSelect.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", 
		"Snapshot=t571.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Search/DropDownFilter.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		LAST);

	web_url("DropDownFilter.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/DropDownFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", 
		"Snapshot=t572.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Controls/Lookup.js", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/api/tags/getVisibleTags?aboutType=9", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/ScheduledItem/ItemOptions?AboutType=Candidate&ReferenceID=2494772&FromFile=&FromAboutTypeID=&FromReferenceID=&EntityIDs%5B%5D=00000000-0000-0000-0000-000000000e01&TypeID=0&ItemID=0", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/user/List-getById?ids=08b5c73d-8e4d-467c-82be-0c6789f8f6a5&kinds=0&isActiveRecruitersOnly=true&useEntity=true", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/ScheduledItem/DistributionListValues", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/MVC/Content/images/bits/cleditor/toolbar.gif", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/MVC/Content/images/bits/cleditor/buttons.gif", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/images/icons/puzzle.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		LAST);

	web_custom_request("GetWidgetWithSession_4", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidgetWithSession", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", 
		"Snapshot=t573.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'referencelist','data':'{\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%20AllowEdit%3Atrue%2C%20CallerID%3A%20%27notereferences_manageScheduledItemWidget_773426%27%2C%20StartingReferences%3A%20%27%255B%257B%2522AboutType%2522%253A6%252C%2522ReferenceID%2522%253A%25222494772%2522%252C%2522IsPermanent%2522%253Atrue%252C%2522Name%2522%253A%2522Kandasamy%2520Java%252Fj2ee%2520Developer%2522%257D%255D%27%7D%20\"}'}", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/abouttypes/7.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/2.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/scheduleditemtypes/110.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/ScheduledItem/DistributionListValues", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/MVC/Content/images/bits/jqueryui/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/MVC/Content/images/bits/jqueryui/ui-bg_glass_65_ffffff_1x400.png", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/MVC/Content/images/bits/jqueryui/ui-bg_glass_75_e6e6e6_1x400.png", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/priorities/2.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/arrowright.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/arrowleft.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/bullet_delete.png", "Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", ENDITEM, 
		LAST);

	lr_end_transaction("1_Add Note",LR_AUTO);
 

	lr_start_transaction("1_save note");

	web_custom_request("AddFullNote", 
		"URL=https://staff.belflex.com/Mvc/ScheduledItem/AddFullNote", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", 
		"Snapshot=t574.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"WithItem\":false,\"ItemID\":null,\"References\":[{\"AboutType\":6,\"ReferenceID\":\"2494772\",\"IsPermanent\":true,\"Name\":\"Kandasamy Java/j2ee Developer\"}],\"DefaultReferenceAboutType\":6,\"DefaultReference\":{\"ReferenceID\":\"2494772\",\"AboutType\":6},\"Assignee\":{\"PoolInstanceName\":null,\"Id\":877465},\"NoteNotifyOptions\":{\"SelectedDepartments\":[],\"SelectedDistributionLists\":[],\"SelectedExternalAboutTypes\":[],\"SelectedOwnerAboutTypes\":[],\"SelectedPeople\":[],\""
		"SelectedSpecialPeople\":[],\"SelectedSpecialPeopleIDs\":[]},\"ToRecipients\":{\"SelectedDepartments\":[],\"SelectedDistributionLists\":[],\"SelectedExternalAboutTypes\":[],\"SelectedOwnerAboutTypes\":[],\"SelectedPeople\":[],\"SelectedSpecialPeople\":[],\"SelectedSpecialPeopleIDs\":[]},\"Sharings\":[],\"TypeID\":0,\"CategoryID\":null,\"Priority\":2,\"Title\":null,\"Location\":null,\"ExportToCalendar\":false,\"Description\":null,\"FollowUpAction\":0,\"FollowUpTimeSpan\":{},\"FollowUpTitle\":null,\""
		"SetAsCompleted\":false,\"SetAsCanceled\":false,\"CreateNewTask\":false,\"PushForward\":false,\"FollowUpSkipWeekends\":false,\"RelatedAttachments\":[],\"Tags\":[],\"CreationStrategy\":null,\"BreakByAboutType\":6,\"Start\":\"3/9/2020 12:00 AM\",\"End\":\"3/9/2020 1:00 AM\",\"NoteOptions\":{\"ShareOptions\":[{\"AboutType\":7,\"DisplayName\":\"Internal users\",\"Selected\":true,\"IsEditable\":false},{\"AboutType\":6,\"DisplayName\":\"Referenced candidate(s)\",\"Selected\":false,\"IsEditable\":true},{"
		"\"AboutType\":20,\"DisplayName\":\"Vendor Managers\",\"Selected\":false,\"IsEditable\":true},{\"AboutType\":2,\"DisplayName\":\"Referenced contact(s)\",\"Selected\":false,\"IsEditable\":true}],\"Body\":\"asdasdasd\"}}", 
		LAST); 

    web_reg_find("Text=asdasd", LAST);
	web_custom_request("GetWidgetWithSession_6", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidgetWithSession", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/candidate/manage.aspx?refid=2494772&null", 
		"Snapshot=t576.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'notelist','data':'eyJBYm91dFR5cGUiOiJDYW5kaWRhdGUiLCJSZWZlcmVuY2VJRCI6IjI0OTQ3NzIiLCJMb2dnZWRJbkFzTW9kZSI6IlJlY3J1aXRlciIsIkN1cnJlbnRVc2VySUQiOiIwOGI1YzczZC04ZTRkLTQ2N2MtODJiZS0wYzY3ODlmOGY2YTUiLCJDdXJyZW50RW50aXR5SUQiOiIwMDAwMDAwMC0wMDAwLTAwMDAtMDAwMC0wMDAwMDAwMDBlMDEiLCJNb2RlIjoiU2lkZWJhciIsIlNob3dUaXRsZSI6IkZhbHNlIiwiU2hvd1JlZmVyZW5jZXMiOiJGYWxzZSJ9'}", 
		LAST); 

	lr_end_transaction("1_save note",LR_AUTO); 
 
	return 0;
}