
undefined8 FUN_00528f20(long param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = FUN_004098f0();
  if (param_3 != 0 || param_2 != 0) {
    if (param_2 != 0) {
      iVar1 = FUN_0040a180(param_1);
      FUN_00498c50(param_2,iVar1 * 8,lVar2);
      FUN_0054c660(lVar2 + 0x118,*(undefined4 *)(lVar2 + 0x10c),*(undefined4 *)(lVar2 + 0x108),lVar2
                   ,FUN_00494ec0);
      if (param_4 == 0) {
        pcVar3 = FUN_00495c50;
      }
      else {
        pcVar3 = FUN_00495b60;
      }
      *(code **)(lVar2 + 0x150) = pcVar3;
      *(undefined4 *)(lVar2 + 0xf8) = 1;
    }
    if (param_3 != 0) {
      thunk_FUN_00713a50(param_1 + 0x28,param_3,(long)(0xf - *(int *)(lVar2 + 0x108)));
      *(undefined4 *)(lVar2 + 0xfc) = 1;
    }
  }
  return 1;
}

