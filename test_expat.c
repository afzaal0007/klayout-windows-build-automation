#include "expat.h"
#include <stdio.h>
#include <string.h>

void start_element(void *userData, const char *name, const char **atts) {
    printf("Start element: %s\n", name);
}

void end_element(void *userData, const char *name) {
    printf("End element: %s\n", name);
}

int main() {
    XML_Parser parser = XML_ParserCreate(NULL);
    if (!parser) {
        printf("Failed to create parser\n");
        return 1;
    }

    XML_SetElementHandler(parser, start_element, end_element);

    const char *xml = "<root><child>Test</child></root>";
    
    if (XML_Parse(parser, xml, strlen(xml), 1) == XML_STATUS_ERROR) {
        printf("Parse error: %s\n", XML_ErrorString(XML_GetErrorCode(parser)));
        XML_ParserFree(parser);
        return 1;
    }

    printf("Parse successful!\n");
    XML_ParserFree(parser);
    return 0;
}
