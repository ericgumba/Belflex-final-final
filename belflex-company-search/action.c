Action()
{
 
	web_set_sockets_option("SSL_VERSION", "2&3");
 

	lr_start_transaction("1_Navigate To Company Search Tab"); 


	web_url("Tip", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=FullTextSearch.FilterUI", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t262.inf", 
		"Mode=HTML", 
		EXTRARES,  
		LAST);
 

	web_custom_request("set", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t265.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Company.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\"],\"RecentParameters\":[]}}", 
		LAST); 

	web_url("Tip_2", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=LocationSearch.FilterUI", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t291.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/images/bits/ddl.png", "Referer=https://staff.belflex.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		LAST);
 

	web_url("Tip_3", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=CommunicationMethodSearch.FilterUI", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t296.inf", 
		"Mode=HTML", 
		EXTRARES, 
		  
		LAST);

	web_custom_request("set_2", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t297.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Company.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\"],\"RecentParameters\":[]}}", 
		LAST);
 

	web_custom_request("DesignerModel", 
		"URL=https://staff.belflex.com/Mvc/Forms/DesignerModel", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t304.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=null", 
		LAST);
	lr_end_transaction("1_Navigate To Company Search Tab",LR_AUTO);


	lr_start_transaction("1_Perform Company Search");
    web_reg_find("Text=Wilson", LAST);

	web_custom_request("Search-FetchData", 
		"URL=https://staff.belflex.com/Search/company/Search-FetchData", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t305.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"PageSize\":20,\"Page\":0,\"Criterion\":{\"IncludeDataSources\":null,\"Arguments\":[{\"DataSource\":\"erecruit Internal Database\",\"Parameter\":\"Fts\",\"Value\":{\"Query\":\"Apple\",\"SearchIndexes\":[{\"IndexName\":\"Notes\",\"LocalizedValue\":\"Search Notes\",\"Value\":0}],\"SearchRecord\":false,\"Stemming\":false,\"Thesaurus\":false}},{\"DataSource\":\"erecruit Internal Database\",\"Parameter\":\"Status\",\"Value\":{\"Statuses\":[0,130,136,144,147],\"DimensionValueID\":null,\""
		"DimensionStatuses\":null}},{\"DataSource\":\"erecruit Internal Database\",\"Parameter\":\"Industry\",\"Value\":{\"IndustryIds\":[]}}]},\"GridLayout\":{\"Columns\":[{\"ID\":\"Company\"},{\"ID\":\"CurrentLocation\"},{\"ID\":\"LastNote\"},{\"ID\":\"ContactCount\"},{\"ID\":\"PositionCount\"},{\"ID\":\"Status\"}],\"Groups\":null,\"Sorters\":[{\"ID\":\"Company\",\"Direction\":0}],\"PageSize\":20,\"PageSizes\":[20,50,100,500,1000]}}", 
		EXTRARES, 
		"Url=/Mvc/Content/js/External/Kendo/styles/Uniform/loading-image.gif", "Referer=https://staff.belflex.com/Mvc/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/statusicons/4.png", "Referer=https://staff.belflex.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/statusicons/5.png", "Referer=https://staff.belflex.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		LAST); 

	lr_end_transaction("1_Perform Company Search",LR_AUTO);
 

	return 0;
}