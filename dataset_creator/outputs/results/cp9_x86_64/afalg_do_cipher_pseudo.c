
undefined8 afalg_do_cipher(long param_1,long param_2,int *param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  ssize_t sVar6;
  long lVar7;
  int *piVar8;
  undefined8 *puVar9;
  ulong uVar10;
  char *pcVar11;
  undefined8 uVar12;
  long in_FS_OFFSET;
  undefined8 local_138;
  undefined8 uStack_130;
  int local_10c;
  long local_100;
  int *local_f8;
  long local_f0;
  undefined1 local_e8 [16];
  int **local_d8;
  undefined8 uStack_d0;
  undefined8 *local_c8;
  size_t local_c0;
  undefined8 local_b8;
  undefined1 local_a8 [16];
  long local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 auStack_74 [12];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0 && param_3 != (int *)0x0) && (param_1 != 0)) {
    piVar4 = (int *)EVP_CIPHER_CTX_get_cipher_data();
    if ((piVar4 != (int *)0x0) && (*piVar4 == 0x1890671)) {
      iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      local_138 = 0;
      uStack_130 = 0;
      if (iVar1 == 0) {
        puVar5 = (undefined8 *)((long)param_3 + param_4 + -0x10);
        local_138 = *puVar5;
        uStack_130 = puVar5[1];
      }
      uVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
      puVar5 = (undefined8 *)EVP_CIPHER_CTX_iv(param_1);
      local_80 = 0x300000117;
      local_c8 = &local_88;
      uStack_4c = 0;
      auStack_74 = SUB1612((undefined1  [16])0x0,4);
      local_78 = uVar2;
      local_68 = 0x200000117;
      local_e8 = (undefined1  [16])0x0;
      local_c0 = 0x40;
      local_88 = 0x14;
      auStack_74._4_8_ = 0x24;
      uStack_60 = 0x10;
      uStack_54 = puVar5[1];
      uStack_5c = (undefined4)*puVar5;
      local_58 = (undefined4)((ulong)*puVar5 >> 0x20);
      local_b8._0_4_ = 0x8000;
      local_b8._4_4_ = 0;
      uStack_d0 = 1;
      local_d8 = &local_f8;
      local_f8 = param_3;
      local_f0 = param_4;
      sVar6 = sendmsg(piVar4[1],(msghdr *)local_e8,0);
      uVar12 = 0x21a;
      pcVar11 = "ALG_PERR: %s(%d): sendmsg failed for cipher operation : ";
      if (-1 < sVar6) {
        if (sVar6 != param_4) goto LAB_004368be;
        iVar1 = piVar4[1];
        local_100 = 0;
        local_e8 = ZEXT816(0);
        if (piVar4[5] == 0) {
          local_f8 = (int *)0x0;
          lVar7 = ASYNC_get_current_job();
          if (lVar7 == 0) {
            lVar7 = syscall(0x122,0,0);
            piVar4[4] = (int)lVar7;
            if ((int)lVar7 == -1) {
              __fprintf_chk(stderr,1,"ALG_PERR: %s(%d): Failed to get eventfd : ",
                            "../engines/e_afalg.c",0xea);
              perror((char *)0x0);
              ERR_AFALG_error_constprop_0(0x6c,0xeb);
              goto LAB_004368be;
            }
            piVar4[5] = 1;
          }
          else {
            lVar7 = ASYNC_get_wait_ctx(lVar7);
            if (lVar7 == 0) goto LAB_004368be;
            iVar3 = ASYNC_WAIT_CTX_get_fd(lVar7,"afalg",piVar4 + 4,&local_f8);
            if (iVar3 == 0) {
              uVar10 = syscall(0x122,0,0);
              piVar4[4] = (int)uVar10;
              if ((int)uVar10 == -1) {
                __fprintf_chk(stderr,1,"ALG_PERR: %s(%d): Failed to get eventfd : ",
                              "../engines/e_afalg.c",0xd2);
                perror((char *)0x0);
                ERR_AFALG_error_constprop_0(0x6c,0xd3);
                goto LAB_004368be;
              }
              iVar3 = ASYNC_WAIT_CTX_set_wait_fd
                                (lVar7,"afalg",uVar10 & 0xffffffff,local_f8,afalg_waitfd_cleanup);
              if (iVar3 == 0) {
                close(piVar4[4]);
                goto LAB_004368be;
              }
              fcntl(piVar4[4],4,0x800);
            }
            piVar4[5] = 2;
          }
        }
        local_f8 = piVar4 + 0x10;
        *(undefined1 (*) [16])(piVar4 + 0x14) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(piVar4 + 0x1c) = (undefined1  [16])0x0;
        piVar4[0x15] = iVar1;
        piVar4[0x1f] = piVar4[4];
        *(long *)(piVar4 + 0x16) = param_2;
        piVar4[0x1a] = 0;
        piVar4[0x1b] = 0;
        *(long *)(piVar4 + 0x18) = param_4;
        piVar4[0x1e] = 1;
        *(undefined1 (*) [16])(piVar4 + 0x10) = (undefined1  [16])0x0;
        lVar7 = syscall(0xd1,*(undefined8 *)(piVar4 + 6),1,&local_f8);
        local_10c = 0;
        if ((int)lVar7 < 0) {
          uVar12 = 0x132;
          pcVar11 = "ALG_PERR: %s(%d): io_read failed : ";
        }
        else {
          do {
            while( true ) {
              ASYNC_pause_job();
              sVar6 = read(piVar4[4],&local_100,8);
              if ((int)sVar6 < 0) break;
              if (local_100 != 0) {
                lVar7 = syscall(0xd0,*(undefined8 *)(piVar4 + 6),1,1,local_a8,(msghdr *)local_e8);
                if ((int)lVar7 < 1) {
                  if ((int)lVar7 != 0) {
                    uVar12 = 0x173;
                    pcVar11 = "ALG_PERR: %s(%d): io_getevents failed : ";
                    goto LAB_00436c2a;
                  }
                }
                else {
                  if (-1 < local_98) {
                    iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
                    if (iVar1 == 0) {
                      puVar5 = (undefined8 *)EVP_CIPHER_CTX_iv_noconst(param_1);
                      *puVar5 = local_138;
                      puVar5[1] = uStack_130;
                      uVar12 = 1;
                    }
                    else {
                      puVar5 = (undefined8 *)(param_2 + -0x10 + param_4);
                      puVar9 = (undefined8 *)EVP_CIPHER_CTX_iv_noconst(param_1);
                      uVar12 = puVar5[1];
                      *puVar9 = *puVar5;
                      puVar9[1] = uVar12;
                      uVar12 = 1;
                    }
                    goto LAB_004368c0;
                  }
                  if ((local_98 != -0x10) || (iVar1 = local_10c + 1, 2 < local_10c))
                  goto LAB_004368be;
                  lVar7 = syscall(0xd1,*(undefined8 *)(piVar4 + 6),1,&local_f8);
                  local_10c = iVar1;
                  if ((int)lVar7 < 0) {
                    __fprintf_chk(stderr,1,"ALG_PERR: %s(%d): retry %d for io_read failed : ",
                                  "../engines/e_afalg.c",0x161,iVar1);
                    perror((char *)0x0);
                    goto LAB_004368be;
                  }
                }
              }
            }
            piVar8 = __errno_location();
          } while (*piVar8 == 0xb);
          uVar12 = 0x13f;
          pcVar11 = "ALG_PERR: %s(%d): read failed for event fd : ";
        }
      }
LAB_00436c2a:
      __fprintf_chk(stderr,1,pcVar11,"../engines/e_afalg.c",uVar12);
      perror((char *)0x0);
    }
  }
LAB_004368be:
  uVar12 = 0;
LAB_004368c0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

