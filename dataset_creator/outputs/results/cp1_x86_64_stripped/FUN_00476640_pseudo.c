
bool FUN_00476640(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar2 = param_1[1];
  uVar4 = FUN_00485290(*param_1);
  if (param_2 == 0) {
    return true;
  }
  if (lVar2 != 0) {
    puVar1 = param_1 + 2;
    iVar3 = FUN_0043c4c0(puVar1,param_2,uVar4);
    if (iVar3 != 0) {
      uVar4 = FUN_0043c5c0(puVar1);
      iVar3 = FUN_0040a4b0(uVar4);
      if (iVar3 == 6) {
        uVar4 = FUN_0043c5d0(puVar1);
        uVar5 = FUN_0043c5c0(puVar1);
        iVar3 = FUN_00538aa0(lVar2,uVar5,uVar4,0,0);
        if ((iVar3 != 0) &&
           ((lVar6 = thunk_FUN_0041cdd0(param_2,"key"), lVar6 == 0 ||
            ((*(int *)(lVar6 + 8) == 5 &&
             (iVar3 = FUN_004765c0(param_1,*(undefined8 *)(lVar6 + 0x10),
                                   *(undefined8 *)(lVar6 + 0x18)), iVar3 != 0)))))) {
          lVar6 = thunk_FUN_0041cdd0(param_2,"iv");
          if (lVar6 == 0) {
            return true;
          }
          if ((*(int *)(lVar6 + 8) == 5) &&
             (iVar3 = FUN_00536c00(lVar2,9,*(undefined4 *)(lVar6 + 0x18),0), iVar3 != 0)) {
            iVar3 = FUN_00538aa0(lVar2,0,0,0,*(undefined8 *)(lVar6 + 0x10));
            return iVar3 != 0;
          }
        }
      }
      else {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/macs/gmac_prov.c",0xda,"gmac_set_ctx_params");
        FUN_0051f8f0(0x39,0x7d,0);
      }
    }
  }
  return false;
}

