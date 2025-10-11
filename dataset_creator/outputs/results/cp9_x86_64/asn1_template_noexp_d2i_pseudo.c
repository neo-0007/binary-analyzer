
/* WARNING: Type propagation algorithm not settling */

int asn1_template_noexp_d2i
              (long *******param_1,undefined8 *param_2,char *param_3,ulong *param_4,char param_5,
              undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long ******pppppplVar6;
  ASN1_ITEM *pAVar7;
  long *******ppppppplVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  long in_FS_OFFSET;
  char *local_70 [2];
  char local_59;
  long *******local_58;
  char *local_50;
  ASN1_VALUE *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70[0] = param_3;
  if (param_1 != (long *******)0x0) {
    uVar1 = *param_4;
    local_50 = (char *)*param_2;
    uVar9 = (uint)uVar1 & 0xc0;
    ppppppplVar8 = param_1;
    if ((uVar1 & 0x1000) != 0) {
      ppppppplVar8 = (long *******)&local_58;
      local_58 = param_1;
    }
    iVar11 = (int)param_5;
    if ((uVar1 & 6) == 0) {
      if ((uVar1 & 8) == 0) {
        uVar5 = (*(code *)param_4[4])();
        iVar11 = asn1_item_embed_d2i(ppppppplVar8,&local_50,param_3,uVar5,0xffffffff,0,iVar11,
                                     param_6,param_7,param_8,param_9);
        if (iVar11 != 0) goto joined_r0x004a23f6;
        ERR_new();
        uVar5 = 0x2ad;
        iVar11 = 0;
      }
      else {
        uVar2 = param_4[1];
        uVar5 = (*(code *)param_4[4])();
        iVar11 = asn1_item_embed_d2i(ppppppplVar8,&local_50,param_3,uVar5,uVar2 & 0xffffffff,
                                     uVar1 & 0xc0,iVar11,param_6,param_7,param_8,param_9);
        if (iVar11 != 0) {
joined_r0x004a23f6:
          if (iVar11 == -1) {
            iVar11 = -1;
          }
          else {
LAB_004a23fd:
            *param_2 = local_50;
            iVar11 = 1;
          }
          goto LAB_004a22f3;
        }
        ERR_new();
        uVar5 = 0x2a4;
        iVar11 = 0;
      }
LAB_004a2421:
      ERR_set_debug("../crypto/asn1/tasn_dec.c",uVar5,"asn1_template_noexp_d2i");
      ERR_set_error(0xd,0x8010a,0);
      goto LAB_004a22f3;
    }
    if ((uVar1 & 8) == 0) {
      uVar4 = 0x10;
      uVar9 = (uint)uVar1 & 2;
      if ((uVar1 & 2) != 0) {
        uVar9 = 0;
        uVar4 = 0x11;
      }
    }
    else {
      uVar4 = (undefined4)param_4[1];
    }
    iVar11 = asn1_check_tlen(local_70,0,0,&local_59,0,&local_50,param_3,uVar4,uVar9,iVar11,param_6);
    if (iVar11 == 0) {
      ERR_new();
      uVar5 = 0x265;
      goto LAB_004a2421;
    }
    if (iVar11 == -1) goto LAB_004a22f3;
    pppppplVar6 = *ppppppplVar8;
    if (pppppplVar6 == (long ******)0x0) {
      pppppplVar6 = (long ******)OPENSSL_sk_new_null();
      *ppppppplVar8 = pppppplVar6;
    }
    else {
      while (iVar11 = OPENSSL_sk_num(pppppplVar6), 0 < iVar11) {
        local_48 = (ASN1_VALUE *)OPENSSL_sk_pop(pppppplVar6);
        pAVar7 = (ASN1_ITEM *)(*(code *)param_4[4])();
        ASN1_item_ex_free(&local_48,pAVar7);
      }
      pppppplVar6 = *ppppppplVar8;
    }
    if (pppppplVar6 == (long ******)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/tasn_dec.c",0x278,"asn1_template_noexp_d2i");
      ERR_set_error(0xd,0xc0100,0);
    }
    else {
      pcVar10 = local_70[0];
      pcVar3 = local_50;
      do {
        local_50 = pcVar3;
        if ((long)pcVar10 < 1) {
          if (local_59 == '\0') goto LAB_004a23fd;
          ERR_new();
          ERR_set_debug("../crypto/asn1/tasn_dec.c",0x29b,"asn1_template_noexp_d2i");
          ERR_set_error(0xd,0x89,0);
          goto LAB_004a22f0;
        }
        if (((pcVar10 != (char *)0x1) && (*pcVar3 == '\0')) && (pcVar3[1] == '\0')) {
          local_50 = pcVar3 + 2;
          if (local_59 != '\0') goto LAB_004a23fd;
          ERR_new();
          ERR_set_debug("../crypto/asn1/tasn_dec.c",0x283,"asn1_template_noexp_d2i");
          ERR_set_error(0xd,0x9f,0);
          goto LAB_004a22f0;
        }
        local_48 = (ASN1_VALUE *)0x0;
        uVar5 = (*(code *)param_4[4])();
        iVar11 = asn1_item_embed_d2i(&local_48,&local_50,pcVar10,uVar5,0xffffffff,0,0,param_6,
                                     param_7,param_8,param_9);
        if (iVar11 < 1) {
          ERR_new();
          ERR_set_debug("../crypto/asn1/tasn_dec.c",0x28e,"asn1_template_noexp_d2i");
          uVar5 = 0x8010a;
          goto LAB_004a24fc;
        }
        pcVar10 = pcVar3 + ((long)pcVar10 - (long)local_50);
        local_70[0] = pcVar10;
        iVar11 = OPENSSL_sk_push(*ppppppplVar8,local_48);
        pcVar3 = local_50;
      } while (iVar11 != 0);
      ERR_new();
      ERR_set_debug("../crypto/asn1/tasn_dec.c",0x295,"asn1_template_noexp_d2i");
      uVar5 = 0xc0100;
LAB_004a24fc:
      ERR_set_error(0xd,uVar5,0);
      pAVar7 = (ASN1_ITEM *)(*(code *)param_4[4])();
      ASN1_item_free(local_48,pAVar7);
    }
  }
LAB_004a22f0:
  iVar11 = 0;
LAB_004a22f3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar11;
}

