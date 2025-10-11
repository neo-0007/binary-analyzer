
int check_revocation(long param_1)

{
  ulong uVar1;
  char *pcVar2;
  int iVar3;
  X509 *a;
  X509_NAME *pXVar4;
  long lVar5;
  undefined8 extraout_RDX;
  undefined8 uVar6;
  X509_CRL *a_00;
  int iVar7;
  int iVar8;
  long in_FS_OFFSET;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  X509_CRL *local_60;
  undefined8 local_58;
  X509_CRL *local_50;
  X509_CRL *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18);
  if ((uVar1 & 4) != 0) {
    if ((uVar1 & 8) == 0) {
      if (*(long *)(param_1 + 0xd8) != 0) goto LAB_005929dd;
      local_6c = 0;
    }
    else {
      local_6c = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
      local_6c = local_6c + -1;
      if (local_6c < 0) goto LAB_005929dd;
    }
    iVar8 = 0;
    do {
      *(int *)(param_1 + 0xac) = iVar8;
      local_60 = (X509_CRL *)0x0;
      a = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar8);
      *(undefined8 *)(param_1 + 0xd0) = 0;
      pcVar2 = a[1].name;
      *(X509 **)(param_1 + 0xb8) = a;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      if (((ulong)pcVar2 & 0x400) == 0) {
        iVar7 = 0;
        do {
          if (*(code **)(param_1 + 0x58) != (code *)0x0) {
            iVar3 = (**(code **)(param_1 + 0x58))(param_1,&local_60,a);
            if (iVar3 != 0) {
              a_00 = (X509_CRL *)0x0;
              *(X509_CRL **)(param_1 + 200) = local_60;
              iVar3 = (**(code **)(param_1 + 0x60))(param_1);
              if (iVar3 != 0) goto LAB_00592ab1;
LAB_0059289b:
              iVar7 = 0;
              X509_CRL_free(local_60);
              X509_CRL_free(a_00);
              *(undefined8 *)(param_1 + 200) = 0;
              goto LAB_005929e3;
            }
LAB_00592991:
            *(undefined4 *)(param_1 + 0xb0) = 3;
            iVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
            X509_CRL_free(local_60);
            X509_CRL_free((X509_CRL *)0x0);
            *(undefined8 *)(param_1 + 200) = 0;
            if (iVar7 == 0) goto LAB_005929e3;
            goto LAB_005929ce;
          }
          local_58 = 0;
          local_68 = 0;
          local_50 = (X509_CRL *)0x0;
          local_48 = (X509_CRL *)0x0;
          pXVar4 = X509_get_issuer_name(a);
          local_64 = *(undefined4 *)(param_1 + 0xd4);
          uVar10 = *(undefined8 *)(param_1 + 0x18);
          iVar3 = get_crl_sk(param_1,&local_50,&local_48,&local_58,&local_68,&local_64);
          uVar6 = extraout_RDX;
          if (iVar3 == 0) {
            auVar9 = (**(code **)(param_1 + 0x80))(param_1,pXVar4,extraout_RDX,uVar10);
            uVar6 = auVar9._8_8_;
            lVar5 = auVar9._0_8_;
            if ((lVar5 != 0) || (local_50 == (X509_CRL *)0x0)) {
              get_crl_sk(param_1,&local_50,&local_48,&local_58,&local_68,&local_64,lVar5);
              OPENSSL_sk_pop_free(lVar5,X509_CRL_free);
              uVar6 = 0x592945;
              goto LAB_00592983;
            }
          }
          else {
LAB_00592983:
            if (local_50 == (X509_CRL *)0x0) goto LAB_00592991;
          }
          a_00 = local_48;
          local_60 = local_50;
          *(X509_CRL **)(param_1 + 200) = local_50;
          *(undefined8 *)(param_1 + 0xc0) = local_58;
          *(undefined4 *)(param_1 + 0xd0) = local_68;
          *(undefined4 *)(param_1 + 0xd4) = local_64;
          iVar3 = (**(code **)(param_1 + 0x60))(param_1,local_50,uVar6);
          if (iVar3 == 0) goto LAB_0059289b;
          if (a_00 == (X509_CRL *)0x0) {
LAB_00592ab1:
            iVar3 = (**(code **)(param_1 + 0x68))(param_1,local_60,a);
            if (iVar3 == 0) goto LAB_0059289b;
          }
          else {
            iVar3 = (**(code **)(param_1 + 0x60))(param_1,a_00);
            if ((iVar3 == 0) || (iVar3 = (**(code **)(param_1 + 0x68))(param_1,a_00,a), iVar3 == 0))
            goto LAB_0059289b;
            if (iVar3 != 2) goto LAB_00592ab1;
          }
          X509_CRL_free(local_60);
          X509_CRL_free(a_00);
          iVar3 = *(int *)(param_1 + 0xd4);
          local_60 = (X509_CRL *)0x0;
          if (iVar3 == iVar7) goto LAB_00592991;
          iVar7 = iVar3;
        } while (iVar3 != 0x807f);
        X509_CRL_free((X509_CRL *)0x0);
        X509_CRL_free((X509_CRL *)0x0);
        *(undefined8 *)(param_1 + 200) = 0;
      }
LAB_005929ce:
      iVar8 = iVar8 + 1;
    } while (iVar8 <= local_6c);
  }
LAB_005929dd:
  iVar7 = 1;
LAB_005929e3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar7;
}

