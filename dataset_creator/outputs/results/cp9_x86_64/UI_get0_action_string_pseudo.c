
char * UI_get0_action_string(UI_STRING *uis)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (*(int *)uis == 3) {
    pcVar1 = *(char **)(uis + 0x28);
  }
  return pcVar1;
}

