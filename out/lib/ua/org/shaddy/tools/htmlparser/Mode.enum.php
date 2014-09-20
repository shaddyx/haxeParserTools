<?php

class ua_org_shaddy_tools_htmlparser_Mode extends Enum {
	public static $Comment;
	public static $Normal;
	public static $Script;
	public static $Text;
	public static $__constructors = array(2 => 'Comment', 0 => 'Normal', 1 => 'Script', 3 => 'Text');
	}
ua_org_shaddy_tools_htmlparser_Mode::$Comment = new ua_org_shaddy_tools_htmlparser_Mode("Comment", 2);
ua_org_shaddy_tools_htmlparser_Mode::$Normal = new ua_org_shaddy_tools_htmlparser_Mode("Normal", 0);
ua_org_shaddy_tools_htmlparser_Mode::$Script = new ua_org_shaddy_tools_htmlparser_Mode("Script", 1);
ua_org_shaddy_tools_htmlparser_Mode::$Text = new ua_org_shaddy_tools_htmlparser_Mode("Text", 3);
