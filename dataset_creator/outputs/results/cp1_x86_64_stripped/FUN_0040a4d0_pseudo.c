
int FUN_0040a4d0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  undefined8 local_c0 [2];
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long lStack_68;
  long local_60;
  long local_30;
  
  lVar3 = *param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0[0] = param_2;
  if (*(code **)(lVar3 + 0x40) != (code *)0x0) {
    iVar1 = (**(code **)(lVar3 + 0x40))();
    goto LAB_0040a510;
  }
  uVar2 = FUN_004098c0(lVar3);
  if ((uVar2 & 0x1000000) == 0) {
    iVar1 = FUN_0040a4b0(lVar3);
    if (iVar1 != 0x10001) {
      if (iVar1 < 0x10002) {
        if (iVar1 == 6) {
          iVar1 = FUN_00409300(param_1,local_c0[0],param_3);
LAB_0040a510:
          if (iVar1 != -2) {
            iVar5 = -1;
            if (-1 < iVar1) {
              iVar5 = iVar1;
            }
            if (0 < iVar1) goto LAB_0040a527;
            goto LAB_0040a5c7;
          }
        }
        else if (iVar1 != 7) goto LAB_0040a6d9;
      }
      else {
        if (iVar1 == 0x10002) {
          iVar5 = 1;
          iVar1 = FUN_0040a400(lVar3,"id-smime-alg-CMS3DESwrap");
          if (iVar1 != 0) {
            FUN_004a10c0(local_c0[0],5,0);
          }
          goto LAB_0040a527;
        }
        if (iVar1 != 0x10003) {
LAB_0040a6d9:
          iVar1 = FUN_00409c60(param_1,local_c0[0]);
          goto LAB_0040a510;
        }
      }
    }
  }
  else if (*(long *)(lVar3 + 0x78) != 0) {
    FUN_0041e2e0(&local_f8,"alg_id_param",0,0);
    local_88 = local_d8;
    local_a8 = local_f8;
    uStack_a0 = uStack_f0;
    local_98 = local_e8;
    lStack_90 = lStack_e0;
    FUN_0041e470(&local_f8);
    local_80 = local_f8;
    uStack_78 = uStack_f0;
    local_60 = local_d8;
    local_70 = local_e8;
    lStack_68 = lStack_e0;
    iVar1 = FUN_005374f0(param_1,&local_a8);
    if ((((iVar1 != 0) && (iVar1 = FUN_0041ce50(&local_a8), iVar1 != 0)) && (local_88 != 0)) &&
       (lVar3 = FUN_0041ad90(local_88,"../crypto/evp/evp_lib.c",0x90), lVar3 != 0)) {
      lStack_90 = local_88;
      local_98 = lVar3;
      FUN_0041ce70(&local_a8);
      local_b0 = lVar3;
      iVar1 = FUN_005374f0(param_1,&local_a8);
      if (((iVar1 != 0) && (iVar1 = FUN_0041ce50(&local_a8), iVar1 != 0)) &&
         (lVar4 = FUN_004a7eb0(local_c0,&local_b0,local_88), lVar4 != 0)) {
        FUN_0041ad60(lVar3,"../crypto/evp/evp_lib.c",0x9b);
        iVar5 = 1;
        goto LAB_0040a527;
      }
      FUN_0041ad60(lVar3,"../crypto/evp/evp_lib.c",0x9b);
    }
    iVar5 = -1;
LAB_0040a5c7:
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/evp_lib.c",0xa5,"evp_cipher_param_to_asn1_ex");
    FUN_0051f8f0(6,0x7a,0);
    goto LAB_0040a527;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/evp_lib.c",0xa3,"evp_cipher_param_to_asn1_ex");
  iVar5 = -1;
  FUN_0051f8f0(6,0x6b,0);
LAB_0040a527:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar5;
}

