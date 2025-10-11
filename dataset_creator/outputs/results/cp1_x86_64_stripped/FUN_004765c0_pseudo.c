
bool FUN_004765c0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  iVar2 = FUN_0040a180(uVar1);
  if (iVar2 != param_3) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/macs/gmac_prov.c",0x6a,"gmac_setkey");
    FUN_0051f8f0(0x39,0x69,0);
    return false;
  }
  iVar2 = FUN_00538aa0(uVar1,0,0,param_2,0);
  return iVar2 != 0;
}

