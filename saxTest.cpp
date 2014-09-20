#include <libxml/parser.h>
void walkTree(xmlNode * a_node)
{
  xmlNode *cur_node = NULL;
  xmlAttr *cur_attr = NULL;
  for (cur_node = a_node; cur_node; cur_node = cur_node->next) {
     // do something with that node information, like… printing the tag’s name and attributes
    printf(“Got tag : %s\n”, cur_node->name);
    for (cur_attr = cur_node->properties; cur_attr; cur_attr = cur_attr->next) {
      printf(“  -> with attribute : %s\n”, cur_attre->name);
    }
    walkTree(cur_node->children);
  }
}
 

void main(){
	htmlParserCtxtPtr parser = htmlCreatePushParserCtxt(NULL, NULL, NULL, 0, NULL, 0);
	htmlCtxtUseOptions(parser, HTML_PARSE_NOBLANKS | HTML_PARSE_NOERROR | HTML_PARSE_NOWARNING | HTML_PARSE_NONET);
	htmlParseChunk(parser, data, len, 0);
	walkTree(xmlDocGetRootElement(parser->myDoc));
}

