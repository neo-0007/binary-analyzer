
void _dl_exception_create(undefined8 *param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  char *__dest;
  void *__dest_00;
  undefined1 *puVar2;
  char *__src;
  size_t sVar3;
  char *local_40;
  
  sVar3 = 1;
  __src = "";
  if (param_2 != (char *)0x0) {
    sVar3 = strlen(param_2);
    sVar3 = sVar3 + 1;
    __src = param_2;
  }
  sVar1 = strlen(param_3);
  __dest = (char *)malloc(sVar1 + 1 + sVar3);
  if (__dest == (char *)0x0) {
    puVar2 = &DAT_008343a2;
    local_40 = "out of memory";
  }
  else {
    __dest_00 = mempcpy(__dest,param_3,sVar1 + 1);
    puVar2 = (undefined1 *)memcpy(__dest_00,__src,sVar3);
    local_40 = __dest;
  }
  param_1[2] = __dest;
  *param_1 = puVar2;
  param_1[1] = local_40;
  return;
}

