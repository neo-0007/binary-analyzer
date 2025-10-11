
int FUN_00555b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5
                )

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  int local_6c;
  int *local_58;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = FUN_005fd140();
  if (lVar4 == 0) {
LAB_00555d77:
    uVar7 = 0xc0100;
    lVar5 = 0;
  }
  else {
    FUN_005fd1e0(lVar4);
    iVar1 = thunk_FUN_007129d0(param_2);
    iVar2 = FUN_004ab7e0(param_1,"-----BEGIN ",0xb);
    if (((iVar2 == 0xb) && (iVar2 = FUN_004ab7e0(param_1,param_2,iVar1), iVar2 == iVar1)) &&
       (iVar2 = FUN_004ab7e0(param_1,"-----\n",6), iVar2 == 6)) {
      iVar2 = thunk_FUN_007129d0(param_3);
      if ((iVar2 < 1) ||
         ((iVar3 = FUN_004ab7e0(param_1,param_3,iVar2), iVar3 == iVar2 &&
          (iVar2 = FUN_004ab7e0(param_1,&DAT_008243ea,1), iVar2 == 1)))) {
        lVar5 = FUN_0041ad90(0x2000,"../crypto/pem/pem_lib.c",0x27c);
        if (lVar5 == 0) goto LAB_00555d77;
        if ((long)param_5 < 1) {
          local_6c = 0;
        }
        else {
          iVar2 = 0;
          local_6c = 0;
          do {
            uVar6 = 0x1400;
            if ((long)param_5 < 0x1401) {
              uVar6 = param_5;
            }
            iVar3 = FUN_005fd200(lVar4,lVar5,&local_44,iVar2 + param_4,uVar6 & 0xffffffff);
            if ((iVar3 == 0) ||
               ((local_44 != 0 && (iVar3 = FUN_004ab7e0(param_1,lVar5), iVar3 != local_44)))) {
              uVar7 = 0x80007;
              goto LAB_00555ba6;
            }
            param_5 = param_5 - uVar6;
            local_6c = local_6c + local_44;
            iVar2 = iVar2 + (int)uVar6;
          } while (0 < (long)param_5);
        }
        local_58 = &local_44;
        FUN_005fd3d0(lVar4,lVar5,local_58);
        if ((local_44 < 1) || (iVar2 = FUN_004ab7e0(param_1,lVar5), iVar2 == local_44)) {
          uVar7 = 0x80007;
          iVar2 = FUN_004ab7e0(param_1,"-----END ",9);
          if ((((iVar2 == 9) && (iVar2 = FUN_004ab7e0(param_1,param_2,iVar1), iVar2 == iVar1)) &&
              (iVar1 = FUN_004ab7e0(param_1,"-----\n",6), iVar1 == 6)) &&
             (local_6c = local_6c + local_44, local_6c != 0)) goto LAB_00555bd3;
        }
        else {
          uVar7 = 0x80007;
        }
        goto LAB_00555ba6;
      }
    }
    uVar7 = 0x80007;
    lVar5 = 0;
  }
LAB_00555ba6:
  FUN_0051f420();
  local_6c = 0;
  FUN_0051f540("../crypto/pem/pem_lib.c",0x298,"PEM_write_bio");
  FUN_0051f8f0(9,uVar7,0);
LAB_00555bd3:
  FUN_005fd160(lVar4);
  FUN_0041aef0(lVar5,0x2000,"../crypto/pem/pem_lib.c",0x29a);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return local_6c;
}

