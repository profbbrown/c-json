void load_json(char *json);
void reset_json(char *json);
char * json_object_get(char *json, char *key);
char * json_array_get(char *json, int idx);
int json_int(char *json);
double json_double(char *json);
char * json_string(char *json);