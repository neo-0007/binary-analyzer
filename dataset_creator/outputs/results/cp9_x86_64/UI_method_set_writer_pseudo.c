
int UI_method_set_writer(UI_METHOD *method,writer *writer)

{
  if (method != (UI_METHOD *)0x0) {
    *(writer **)(method + 0x10) = writer;
    return 0;
  }
  return -1;
}

