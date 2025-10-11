
ulong FUN_004d8f10(undefined8 param_1,int param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(param_4 + 8) == 0) || (*(long *)(param_4 + 0x10) == 0)) ||
     (*(long *)(param_4 + 0x18) == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dsa/dsa_ossl.c",0x14a,"dsa_do_verify");
    uVar11 = 0xffffffff;
    FUN_0051f8f0(10,0x65,0);
    goto LAB_004d9056;
  }
  uVar2 = FUN_004b7bb0();
  if (((uVar2 & 0xffffffbf) != 0xa0) && (uVar2 != 0x100)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dsa/dsa_ossl.c",0x151,"dsa_do_verify");
    uVar11 = 0xffffffff;
    FUN_0051f8f0(10,0x66,0);
    goto LAB_004d9056;
  }
  iVar3 = FUN_004b7bb0(*(undefined8 *)(param_4 + 8));
  if (10000 < iVar3) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dsa/dsa_ossl.c",0x156,"dsa_do_verify");
    uVar11 = 0xffffffff;
    FUN_0051f8f0(10,0x67,0);
    goto LAB_004d9056;
  }
  lVar4 = FUN_004b7690();
  lVar5 = FUN_004b7690();
  lVar6 = FUN_004b7690();
  lVar7 = FUN_004b2a70(0);
  if (((lVar4 == 0) || (lVar5 == 0)) || ((lVar6 == 0 || (lVar7 == 0)))) goto LAB_004d90e8;
  FUN_004da810(param_3,&local_50,&local_48);
  iVar3 = FUN_004b7ba0(local_50);
  if (iVar3 == 0) {
    iVar3 = FUN_004b7d60(local_50);
    if (iVar3 != 0) goto LAB_004d9011;
    iVar3 = FUN_004b77f0(local_50,*(undefined8 *)(param_4 + 0x10));
    if (-1 < iVar3) goto LAB_004d9011;
    iVar3 = FUN_004b7ba0(local_48);
    if (iVar3 != 0) goto LAB_004d9011;
    iVar3 = FUN_004b7d60(local_48);
    if (iVar3 != 0) goto LAB_004d9011;
    iVar3 = FUN_004b77f0(local_48,*(undefined8 *)(param_4 + 0x10));
    if (-1 < iVar3) goto LAB_004d9011;
    lVar8 = FUN_004b6c40(lVar5,local_48,*(undefined8 *)(param_4 + 0x10),lVar7);
    if (lVar8 == 0) {
LAB_004d90e8:
      uVar11 = 0xffffffff;
      FUN_0051f420();
      FUN_0051f540("../crypto/dsa/dsa_ossl.c",0x1a2,"dsa_do_verify");
      FUN_0051f8f0(10,0x80003,0);
    }
    else {
      if ((int)uVar2 >> 3 <= param_2) {
        param_2 = (int)uVar2 >> 3;
      }
      lVar8 = FUN_004b84d0(param_1,param_2,lVar4);
      if (lVar8 == 0) goto LAB_004d90e8;
      iVar3 = FUN_004b8fe0(lVar4,lVar4,lVar5,*(undefined8 *)(param_4 + 0x10),lVar7);
      if (iVar3 == 0) goto LAB_004d90e8;
      lVar8 = lVar5;
      iVar3 = FUN_004b8fe0(lVar5,local_50,lVar5,*(undefined8 *)(param_4 + 0x10),lVar7);
      if (iVar3 == 0) goto LAB_004d90e8;
      uVar10 = *(undefined8 *)(param_4 + 8);
      lVar9 = 0;
      if ((*(byte *)(param_4 + 0x78) & 1) != 0) {
        lVar8 = param_4 + 0x80;
        lVar9 = FUN_004b9bc0(lVar8,*(undefined8 *)(param_4 + 0xb0),uVar10,lVar7);
        if (lVar9 == 0) goto LAB_004d90e8;
        uVar10 = *(undefined8 *)(param_4 + 8);
      }
      pcVar1 = *(code **)(*(long *)(param_4 + 0xa0) + 0x20);
      if (pcVar1 == (code *)0x0) {
        iVar3 = FUN_005c1cc0(lVar6,*(undefined8 *)(param_4 + 0x18),lVar4,
                             *(undefined8 *)(param_4 + 0x68),lVar5,uVar10,lVar7,lVar9);
        if (iVar3 != 0) goto LAB_004d930c;
        goto LAB_004d90e8;
      }
      iVar3 = (*pcVar1)(param_4,lVar6,*(undefined8 *)(param_4 + 0x18),lVar4,
                        *(undefined8 *)(param_4 + 0x68),lVar5,uVar10,lVar7,lVar9,lVar8);
      if (iVar3 == 0) goto LAB_004d90e8;
LAB_004d930c:
      iVar3 = FUN_004b34a0(0,lVar4,lVar6,*(undefined8 *)(param_4 + 0x10),lVar7);
      if (iVar3 == 0) goto LAB_004d90e8;
      iVar3 = FUN_004b77f0(lVar4,local_50);
      uVar11 = (ulong)(iVar3 == 0);
    }
  }
  else {
LAB_004d9011:
    uVar11 = 0;
  }
  FUN_004b2b50(lVar7);
  FUN_004b7fa0(lVar4);
  FUN_004b7fa0(lVar5);
  FUN_004b7fa0(lVar6);
LAB_004d9056:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

