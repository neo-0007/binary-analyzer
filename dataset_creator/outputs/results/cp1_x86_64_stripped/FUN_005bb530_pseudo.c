
undefined8
FUN_005bb530(undefined8 param_1,undefined4 param_2,int param_3,long param_4,int param_5,
            undefined8 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  puVar2 = (undefined8 *)FUN_005bb4f0();
  if (puVar2 == (undefined8 *)0x0) {
    FUN_0051f420();
    uVar3 = 0x25;
LAB_005bb6c9:
    FUN_0051f540("../crypto/asn1/p5_pbe.c",uVar3,"PKCS5_pbe_set0_algor_ex");
    FUN_0051f8f0(0xd,0xc0100,0);
    local_58 = 0;
  }
  else {
    if (param_3 < 1) {
      param_3 = 0x800;
    }
    iVar1 = thunk_FUN_0049f880(puVar2[1],(long)param_3);
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0x2b;
      goto LAB_005bb6c9;
    }
    if (param_5 == 0) {
      lVar5 = 8;
      param_5 = 8;
LAB_005bb5af:
      local_58 = FUN_0041ad90(lVar5,"../crypto/asn1/p5_pbe.c",0x33);
      if (local_58 == 0) {
        FUN_0051f420();
        uVar3 = 0x35;
      }
      else {
        if (param_4 == 0) {
          iVar1 = FUN_00429580(param_6,local_58,lVar5,0);
          if (iVar1 < 1) goto LAB_005bb658;
        }
        else {
          local_58 = thunk_FUN_00713a50(local_58,param_4,lVar5);
        }
        FUN_004a2150(*puVar2,local_58,param_5);
        uVar3 = FUN_005bb480();
        lVar5 = FUN_004a2560(puVar2,uVar3,&local_48);
        if (lVar5 != 0) {
          FUN_005bb510(puVar2);
          uVar3 = local_48;
          uVar4 = FUN_004239c0(param_2);
          iVar1 = FUN_004a8880(param_1,uVar4,0x10,uVar3);
          uVar3 = 1;
          if (iVar1 != 0) goto LAB_005bb67c;
          local_58 = 0;
          puVar2 = (undefined8 *)0x0;
          goto LAB_005bb658;
        }
        FUN_0051f420();
        uVar3 = 0x41;
        local_58 = 0;
      }
      FUN_0051f540("../crypto/asn1/p5_pbe.c",uVar3,"PKCS5_pbe_set0_algor_ex");
      FUN_0051f8f0(0xd,0xc0100,0);
    }
    else {
      lVar5 = (long)param_5;
      if (-1 < param_5) goto LAB_005bb5af;
      local_58 = 0;
    }
  }
LAB_005bb658:
  FUN_0041ad60(local_58,"../crypto/asn1/p5_pbe.c",0x4c);
  FUN_005bb510(puVar2);
  FUN_004a2270(local_48);
  uVar3 = 0;
LAB_005bb67c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

