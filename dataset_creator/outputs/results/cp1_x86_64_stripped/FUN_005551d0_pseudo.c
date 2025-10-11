
int FUN_005551d0(undefined8 param_1,int param_2,int param_3,long param_4)

{
  int iVar1;
  char *pcVar2;
  
  if (param_4 == 0) {
    pcVar2 = (char *)FUN_005fd980();
    if (pcVar2 == (char *)0x0) {
      pcVar2 = "Enter PEM pass phrase:";
    }
    iVar1 = FUN_005fd9a0(param_1,(ulong)(param_3 != 0) << 2,param_2,pcVar2,param_3);
    if (iVar1 == 0) {
      iVar1 = thunk_FUN_007129d0(param_1);
      return iVar1;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/pem/pem_lib.c",0x3e,"PEM_def_callback");
    iVar1 = -1;
    FUN_0051f8f0(9,0x6d,0);
    thunk_FUN_00713720(param_1,0,param_2);
  }
  else {
    iVar1 = thunk_FUN_007129d0(param_4);
    if (param_2 <= iVar1) {
      iVar1 = param_2;
    }
    thunk_FUN_00713a50(param_1,param_4);
  }
  return iVar1;
}

