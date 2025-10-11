
ulong FUN_00430ba0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    FUN_0051f420();
    uVar4 = 0;
    FUN_0051f540("../crypto/rsa/rsa_pmeth.c",0x27e,"pkey_rsa_ctrl_str");
    FUN_0051f8f0(4,0x93,0);
  }
  else {
    iVar1 = thunk_FUN_00712780(param_2,"rsa_padding_mode");
    if (iVar1 == 0) {
      iVar1 = thunk_FUN_00712780(param_3,"pkcs1");
      if (iVar1 == 0) {
        uVar6 = 1;
      }
      else {
        iVar1 = thunk_FUN_00712780(param_3,&DAT_007dcef8);
        if (iVar1 == 0) {
          uVar6 = 3;
        }
        else {
          iVar1 = thunk_FUN_00712780(param_3,&DAT_007dcefd);
          if (iVar1 != 0) {
            iVar1 = thunk_FUN_00712780(param_3,&DAT_007dcf02);
            if (iVar1 != 0) {
              iVar1 = thunk_FUN_00712780(param_3,&DAT_007dcf07);
              if (iVar1 == 0) {
                uVar6 = 5;
              }
              else {
                iVar1 = thunk_FUN_00712780(param_3,&DAT_007d1ad0);
                if (iVar1 != 0) {
                  FUN_0051f420();
                  FUN_0051f540("../crypto/rsa/rsa_pmeth.c",0x291,"pkey_rsa_ctrl_str");
                  uVar4 = 0xfffffffe;
                  FUN_0051f8f0(4,0x76,0);
                  goto LAB_00430dc6;
                }
                uVar6 = 6;
              }
              goto LAB_00430c78;
            }
          }
          uVar6 = 4;
        }
      }
LAB_00430c78:
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = FUN_0042ca30(param_1,uVar6);
        return uVar4;
      }
      goto LAB_004310ef;
    }
    iVar1 = thunk_FUN_00712780(param_2,"rsa_pss_saltlen");
    if (iVar1 == 0) {
      iVar1 = thunk_FUN_00712780(param_3,"digest");
      uVar3 = 0xffffffff;
      if (iVar1 != 0) {
        iVar1 = thunk_FUN_00712780(param_3,"max");
        uVar3 = 0xfffffffd;
        if (iVar1 != 0) {
          iVar1 = thunk_FUN_00712780(param_3,&DAT_007dcf1c);
          uVar3 = 0xfffffffe;
          if (iVar1 != 0) {
            uVar3 = FUN_006e94d0(param_3,0,10);
          }
        }
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = FUN_0042ced0(param_1,uVar3);
        return uVar4;
      }
      goto LAB_004310ef;
    }
    iVar1 = thunk_FUN_00712780(param_2,"rsa_keygen_bits");
    if (iVar1 == 0) {
      uVar6 = FUN_006e94d0(param_3,0,10);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = FUN_0042d040(param_1,uVar6);
        return uVar4;
      }
      goto LAB_004310ef;
    }
    iVar1 = thunk_FUN_00712780(param_2,"rsa_keygen_pubexp");
    if (iVar1 == 0) {
      local_28 = 0;
      uVar2 = FUN_004b29e0(&local_28,param_3);
      uVar4 = (ulong)uVar2;
      if (uVar2 != 0) {
        uVar2 = FUN_0042d1f0(param_1,local_28);
        uVar4 = (ulong)uVar2;
        FUN_004b7fa0(local_28);
      }
    }
    else {
      iVar1 = thunk_FUN_00712780(param_2,"rsa_keygen_primes");
      if (iVar1 == 0) {
        uVar6 = FUN_006e94d0(param_3,0,10);
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar4 = FUN_0042d270(param_1,uVar6);
          return uVar4;
        }
        goto LAB_004310ef;
      }
      iVar1 = thunk_FUN_00712780(param_2,"rsa_mgf1_md");
      if (iVar1 == 0) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = 0x1005;
          uVar7 = 0x7f0;
          goto LAB_00431031;
        }
        goto LAB_004310ef;
      }
      if (**(int **)(param_1 + 0x78) == 0x390) {
        iVar1 = thunk_FUN_00712780(param_2,"rsa_pss_keygen_mgf1_md");
        if (iVar1 == 0) {
          if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_004310ef;
          uVar6 = 0x1005;
          uVar7 = 4;
          goto LAB_00431031;
        }
        iVar1 = thunk_FUN_00712780(param_2,"rsa_pss_keygen_md");
        if (iVar1 == 0) {
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar6 = 1;
            uVar7 = 4;
            goto LAB_00431031;
          }
          goto LAB_004310ef;
        }
        iVar1 = thunk_FUN_00712780(param_2,"rsa_pss_keygen_saltlen");
        if (iVar1 == 0) {
          uVar6 = FUN_006e94d0(param_3,0,10);
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar4 = FUN_0042cf10(param_1,uVar6);
            return uVar4;
          }
          goto LAB_004310ef;
        }
      }
      iVar1 = thunk_FUN_00712780(param_2,"rsa_oaep_md");
      if (iVar1 == 0) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = 0x1009;
          uVar7 = 0x600;
LAB_00431031:
          uVar4 = FUN_00415580(param_1,uVar7,uVar6,param_3);
          return uVar4;
        }
        goto LAB_004310ef;
      }
      uVar2 = thunk_FUN_00712780(param_2,"rsa_oaep_label");
      uVar4 = (ulong)uVar2;
      if (uVar2 == 0) {
        lVar5 = FUN_0041c870(param_3,&local_28);
        if (lVar5 != 0) {
          uVar2 = FUN_0042cc30(param_1,lVar5,local_28 & 0xffffffff);
          uVar4 = (ulong)uVar2;
          if ((int)uVar2 < 1) {
            FUN_0041ad60(lVar5,"../crypto/rsa/rsa_pmeth.c",0x2e0);
          }
        }
      }
      else {
        uVar4 = 0xfffffffe;
      }
    }
  }
LAB_00430dc6:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_004310ef:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

