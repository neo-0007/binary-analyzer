
void FUN_006f4c40(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  long in_FS_OFFSET;
  
  uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  if (((*(int *)(PTR_DAT_0093e068 + 0xc0) == 0) && (iVar2 = FUN_00702290(), iVar2 != -1)) &&
     (iVar2 = FUN_0076dcc0(iVar2), iVar2 != -1)) {
    pbVar3 = (byte *)FUN_006fd380(iVar2,&DAT_00821a06);
    if (pbVar3 != (byte *)0x0) {
      FUN_006f4ba0(pbVar3,param_1,uVar1);
      if ((*pbVar3 & 0x20) != 0) {
        *(uint *)PTR_DAT_0093e068 = *(uint *)PTR_DAT_0093e068 | 0x20;
      }
      FUN_006fd190(pbVar3);
      return;
    }
    FUN_0076dc30(iVar2);
  }
  FUN_006f4ba0(PTR_DAT_0093e068,param_1,uVar1);
  return;
}

