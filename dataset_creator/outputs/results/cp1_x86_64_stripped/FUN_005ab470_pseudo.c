
undefined1  [16] FUN_005ab470(long param_1,long param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  ulong extraout_RDX_00;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x_all.c",0x214,"X509_CRL_digest");
    FUN_0051f8f0(0xb,0xc0102,0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = extraout_RDX_00;
    return auVar3 << 0x40;
  }
  iVar4 = FUN_0040ab70(param_2,&DAT_007d039e);
  if ((iVar4 != 0) && ((*(uint *)(param_1 + 0x84) & 0x100100) == 0x100)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x14;
    }
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    *param_3 = *(undefined8 *)(param_1 + 0xb8);
    param_3[1] = uVar1;
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 200);
    auVar7._8_8_ = extraout_RDX;
    auVar7._0_8_ = 1;
    return auVar7;
  }
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  uVar5 = FUN_005abd50();
  auVar6._0_8_ = FUN_005b4360(uVar5,param_2,param_1,param_3,param_4,uVar2);
  auVar6._8_8_ = uVar1;
  return auVar6;
}

