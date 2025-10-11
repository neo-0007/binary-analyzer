
undefined4
FUN_0055b950(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            long param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9
            )

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  undefined1 local_98 [16];
  undefined1 local_88 [72];
  long local_40;
  
  uVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == 0) goto LAB_0055bafa;
  uVar4 = FUN_005bb480();
  puVar5 = (undefined8 *)FUN_004a12d0(uVar4,param_4);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/pkcs12/p12_crpt.c",0x29,"PKCS12_PBE_keyivgen_ex");
    FUN_0051f8f0(0x23,0x65,0);
    goto LAB_0055bafa;
  }
  uVar2 = 1;
  if (puVar5[1] != 0) {
    uVar2 = FUN_0049fa00();
  }
  uVar4 = *(undefined8 *)((undefined4 *)*puVar5 + 2);
  uVar1 = *(undefined4 *)*puVar5;
  uVar6 = FUN_0040a170(param_5);
  iVar3 = FUN_0055c770(param_2,param_3,uVar4,uVar1,1,uVar2,uVar6,local_88,param_6,param_8,param_9);
  if (iVar3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/pkcs12/p12_crpt.c",0x37,"PKCS12_PBE_keyivgen_ex");
    uVar4 = 0x6b;
LAB_0055bb54:
    uVar2 = 0;
    FUN_0051f8f0(0x23,uVar4,0);
    FUN_005bb510(puVar5);
  }
  else {
    iVar3 = FUN_00409910(param_5);
    if (iVar3 < 1) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      uVar6 = FUN_00409910(param_5);
      puVar7 = local_98;
      iVar3 = FUN_0055c770(param_2,param_3,uVar4,uVar1,2,uVar2,uVar6,puVar7,param_6,param_8,param_9)
      ;
      if (iVar3 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/pkcs12/p12_crpt.c",0x40,"PKCS12_PBE_keyivgen_ex");
        uVar4 = 0x6a;
        goto LAB_0055bb54;
      }
    }
    FUN_005bb510(puVar5);
    uVar2 = FUN_00538a80(param_1,param_5,0,local_88,puVar7,param_7);
    FUN_004227b0(local_88,0x40);
    FUN_004227b0(local_98,0x10);
  }
LAB_0055bafa:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

