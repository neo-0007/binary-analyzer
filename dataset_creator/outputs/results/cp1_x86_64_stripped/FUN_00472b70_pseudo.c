
long FUN_00472b70(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  lVar3 = FUN_00511460(*param_1,*(undefined4 *)(param_1 + 2),0,param_1[1]);
  if (lVar3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/keymgmt/ecx_kmgmt.c",0x249,"ecx_gen");
    FUN_0051f8f0(0x39,0xc0100,0);
    return 0;
  }
  if ((*(byte *)((long)param_1 + 0x14) & 3) == 0) {
    return lVar3;
  }
  pbVar4 = (byte *)FUN_00511650(lVar3);
  if (pbVar4 == (byte *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/keymgmt/ecx_kmgmt.c",0x252,"ecx_gen");
    FUN_0051f8f0(0x39,0xc0100,0);
  }
  else {
    iVar2 = FUN_00429760(*param_1,pbVar4,*(undefined8 *)(lVar3 + 0x58),0);
    if (iVar2 < 1) goto LAB_00472c35;
    uVar1 = *(uint *)(param_1 + 2);
    if (uVar1 == 2) {
      iVar2 = FUN_004e6ef0(*param_1,lVar3 + 0x11,pbVar4,param_1[1]);
    }
    else {
      if (uVar1 < 3) {
        if (uVar1 == 0) {
          *pbVar4 = *pbVar4 & 0xf8;
          pbVar4[0x1f] = pbVar4[0x1f] & 0x7f | 0x40;
          FUN_004e7030(lVar3 + 0x11,pbVar4);
        }
        else {
          *pbVar4 = *pbVar4 & 0xfc;
          pbVar4[0x37] = pbVar4[0x37] | 0x80;
          thunk_FUN_004ddd70(lVar3 + 0x11,pbVar4);
        }
        goto LAB_00472c03;
      }
      if (uVar1 != 3) goto LAB_00472c03;
      iVar2 = FUN_004dee70(*param_1,lVar3 + 0x11,pbVar4,param_1[1]);
    }
    if (iVar2 != 0) {
LAB_00472c03:
      *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) | 1;
      return lVar3;
    }
  }
LAB_00472c35:
  FUN_00511590(lVar3);
  return 0;
}

