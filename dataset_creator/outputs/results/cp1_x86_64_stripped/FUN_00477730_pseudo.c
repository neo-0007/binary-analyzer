
bool FUN_00477730(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0043c7e0(param_1 + 0x10);
  iVar1 = FUN_0040abc0(uVar2);
  if (0xfc < param_3 - 4U) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/macs/kmac_prov.c",0xf9,"kmac_setkey");
    FUN_0051f8f0(0x39,0x69,0);
    return false;
  }
  if (-1 < iVar1) {
    iVar1 = FUN_00477680(param_1 + 0x44,param_1 + 0x30,param_2,param_3,(long)iVar1);
    return iVar1 != 0;
  }
  FUN_0051f420();
  FUN_0051f540("../providers/implementations/macs/kmac_prov.c",0xfd,"kmac_setkey");
  FUN_0051f8f0(0x39,0xa6,0);
  return false;
}

