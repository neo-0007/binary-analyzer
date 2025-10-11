
undefined8 conf_ssl_name_find(char *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar1 = ssl_names_count;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (ssl_names_count != 0) {
    lVar4 = 0;
    puVar3 = ssl_names;
    do {
      iVar2 = strcmp((char *)*puVar3,param_1);
      if (iVar2 == 0) {
        *param_2 = lVar4;
        return 1;
      }
      lVar4 = lVar4 + 1;
      puVar3 = puVar3 + 3;
    } while (lVar4 != lVar1);
  }
  return 0;
}

