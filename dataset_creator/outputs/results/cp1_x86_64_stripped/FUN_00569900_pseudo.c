
undefined8 FUN_00569900(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined1 local_58 [16];
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = FUN_00415850(param_2);
  lVar6 = FUN_0042bce0(*(undefined8 *)(param_2 + 8));
  local_48 = 0;
  local_5c = 0;
  local_58 = (undefined1  [16])0x0;
  if (lVar6 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_ameth.c",0x31b,"rsa_int_import_from");
    FUN_0051f8f0(5,0xc0100,0);
    uVar5 = 0;
    goto LAB_005699ea;
  }
  FUN_0042c5d0(lVar6,0xf000);
  FUN_0042c5f0(lVar6,param_3);
  iVar1 = FUN_0042aaa0(local_58,&local_5c,param_1,*(undefined8 *)(param_2 + 8));
  if (iVar1 != 0) {
    if (param_3 == 0) {
      iVar1 = FUN_00433230(local_58);
      if ((iVar1 != 0) && (iVar1 = FUN_0042a460(lVar6,param_1,1), iVar1 != 0)) {
        uVar5 = FUN_0040f1c0(uVar5,6,lVar6);
LAB_005699d5:
        if ((int)uVar5 != 0) goto LAB_005699ea;
      }
    }
    else if (param_3 == 0x1000) {
      iVar1 = FUN_00433230(local_58);
      if (iVar1 == 0) {
        uVar2 = FUN_00433340(local_58);
        uVar3 = FUN_00433380(local_58);
        uVar4 = FUN_004333a0(local_58);
        uVar7 = FUN_00423b00(uVar2);
        uVar7 = FUN_0040d800(uVar7);
        uVar8 = FUN_00423b00(uVar3);
        uVar8 = FUN_0040d800(uVar8);
        lVar9 = FUN_00569860(uVar7,uVar8,uVar4);
        *(long *)(lVar6 + 0x80) = lVar9;
        if (lVar9 == 0) goto LAB_005699e0;
      }
      iVar1 = FUN_0042a460(lVar6,param_1,1);
      if (iVar1 != 0) {
        uVar5 = FUN_0040f1c0(uVar5,0x390,lVar6);
        goto LAB_005699d5;
      }
    }
  }
LAB_005699e0:
  FUN_0042b980(lVar6);
  uVar5 = 0;
LAB_005699ea:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar5;
}

