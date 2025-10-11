
undefined8 _dl_name_match_p(char *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = strcmp(param_1,*(char **)(param_2 + 8));
  if (iVar2 != 0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
    while( true ) {
      if (puVar1 == (undefined8 *)0x0) {
        return 0;
      }
      iVar2 = strcmp(param_1,(char *)*puVar1);
      if (iVar2 == 0) break;
      puVar1 = (undefined8 *)puVar1[1];
    }
  }
  return 1;
}

