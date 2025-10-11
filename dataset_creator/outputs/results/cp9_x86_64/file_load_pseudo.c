
undefined4
file_load(undefined8 *param_1,code *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
         )

{
  char *pcVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  size_t sVar7;
  ushort **ppuVar8;
  size_t sVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  char *pcVar16;
  undefined **ppuVar17;
  long in_FS_OFFSET;
  code *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined4 local_b0;
  undefined4 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  char *local_80;
  size_t local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 2) == 0) {
    uVar15 = ossl_prov_ctx_get0_libctx(*param_1);
    lVar10 = param_1[4];
    if (lVar10 != 0) {
LAB_00480e7e:
      local_c8 = param_2;
      local_c0 = param_3;
      OSSL_DECODER_CTX_set_construct_data(lVar10,&local_c8);
      OSSL_DECODER_CTX_set_passphrase_cb(param_1[4],param_4,param_5);
      ERR_set_mark();
      uVar5 = OSSL_DECODER_from_bio(param_1[4],param_1[3]);
      lVar10 = BIO_ctrl((BIO *)param_1[3],2,0,(void *)0x0);
      if ((int)lVar10 != 0) {
        uVar12 = ERR_peek_last_error();
        uVar6 = (uint)uVar12;
        if (((0 < (int)uVar6) && ((int)uVar6 >> 0x17 == 0x3c)) && ((uVar6 & 0x7fffff) == 0x8010c)) {
          ERR_pop_to_mark();
          goto LAB_00480e33;
        }
      }
      ERR_clear_last_mark();
      goto LAB_00480e33;
    }
    lVar10 = OSSL_DECODER_CTX_new();
    param_1[4] = lVar10;
    if (lVar10 != 0) {
      iVar4 = OSSL_DECODER_CTX_set_input_type(lVar10,param_1[5]);
      if (iVar4 == 0) {
        ERR_new();
        uVar15 = 0x1b2;
      }
      else if (*(int *)(param_1 + 8) == 5) {
        iVar4 = OSSL_DECODER_CTX_set_input_structure(param_1[4],"Certificate");
        if (iVar4 != 0) goto LAB_00480fe7;
        ERR_new();
        uVar15 = 0x1c0;
      }
      else if ((*(int *)(param_1 + 8) == 6) &&
              (iVar4 = OSSL_DECODER_CTX_set_input_structure(param_1[4],"CertificateList"),
              iVar4 == 0)) {
        ERR_new();
        uVar15 = 0x1c7;
      }
      else {
LAB_00480fe7:
        ppuVar17 = &ossl_any_to_obj_algorithm;
        puVar3 = ossl_any_to_obj_algorithm;
        while (puVar3 != (undefined *)0x0) {
          lVar10 = ossl_decoder_from_algorithm(0,ppuVar17,0);
          if (lVar10 == 0) {
            OSSL_DECODER_free();
            uVar5 = 0;
            goto LAB_00480e33;
          }
          lVar13 = ossl_decoder_instance_new(lVar10,*param_1);
          OSSL_DECODER_free(lVar10);
          if (lVar13 == 0) goto LAB_00480e30;
          iVar4 = ossl_decoder_ctx_add_decoder_inst(param_1[4],lVar13);
          if (iVar4 == 0) {
            ossl_decoder_instance_free(lVar13);
            ERR_new();
            uVar15 = 0x1e5;
            goto LAB_004810dd;
          }
          ppuVar17 = ppuVar17 + 4;
          puVar3 = *ppuVar17;
        }
        iVar4 = OSSL_DECODER_CTX_add_extra(param_1[4],uVar15,param_1[6]);
        if (iVar4 != 0) {
          iVar4 = OSSL_DECODER_CTX_set_construct(param_1[4],file_load_construct);
          if ((iVar4 == 0) ||
             (iVar4 = OSSL_DECODER_CTX_set_cleanup(param_1[4],file_load_cleanup), iVar4 == 0)) {
            ERR_new();
            ERR_set_debug("../providers/implementations/storemgmt/file_store.c",0x1f8,
                          "file_setup_decoders");
            ERR_set_error(0x39,0x8003c,0);
            uVar5 = 0;
            goto LAB_00480e33;
          }
          lVar10 = param_1[4];
          goto LAB_00480e7e;
        }
        ERR_new();
        uVar15 = 0x1ec;
      }
LAB_004810dd:
      ERR_set_debug("../providers/implementations/storemgmt/file_store.c",uVar15,
                    "file_setup_decoders");
      ERR_set_error(0x39,0x8003c,0);
      uVar5 = 0;
      goto LAB_00480e33;
    }
    ERR_new(0);
    pcVar16 = "file_setup_decoders";
    uVar15 = 0x1ab;
LAB_00480f74:
    ERR_set_debug("../providers/implementations/storemgmt/file_store.c",uVar15,pcVar16);
    ERR_set_error(0x39,0xc0100,0);
  }
  else if (*(int *)(param_1 + 2) == 1) {
    pcVar16 = (char *)param_1[6];
    local_b0 = 1;
    local_b8 = "type";
    local_a8 = &object_type_7;
    local_a0 = 4;
    local_98 = 0xffffffffffffffff;
    local_90 = "data";
    local_88 = 4;
    local_80 = (char *)0x0;
    local_78 = 0;
    local_70 = 0xffffffffffffffff;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    if (pcVar16 != (char *)0x0) {
      do {
        if (*pcVar16 != '.') {
          sVar7 = strlen((char *)((long)param_1 + 0x24));
          if (*(char *)((long)param_1 + 0x24) == '\0') {
LAB_00480cc0:
            pcVar16 = (char *)param_1[1];
            pcVar1 = (char *)param_1[6];
            puVar14 = (undefined1 *)0x8198dc;
            sVar9 = strlen(pcVar16);
            sVar7 = sVar9 + 1;
            if ((*pcVar16 != '\0') && (puVar14 = (undefined1 *)0x8198dc, pcVar16[sVar9 - 1] == '/'))
            {
              puVar14 = &DAT_008343a2;
              sVar7 = sVar9;
            }
            sVar9 = strlen(pcVar1);
            lVar10 = sVar7 + 1 + sVar9;
            pcVar16 = (char *)CRYPTO_zalloc(lVar10,
                                            "../providers/implementations/storemgmt/file_store.c",
                                            0x232);
            if (pcVar16 == (char *)0x0) {
              ERR_new();
              pcVar16 = "file_name_to_uri";
              uVar15 = 0x234;
              goto LAB_00480f74;
            }
            OPENSSL_strlcat(pcVar16,param_1[1],lVar10);
            OPENSSL_strlcat(pcVar16,puVar14,lVar10);
            OPENSSL_strlcat(pcVar16,pcVar1,lVar10);
            lVar10 = OPENSSL_DIR_read(param_1 + 3,param_1[1]);
            param_1[6] = lVar10;
            piVar11 = __errno_location();
            iVar4 = *piVar11;
            *(int *)(param_1 + 7) = iVar4;
            if ((lVar10 == 0) && (iVar4 == 0)) {
              *(undefined4 *)(param_1 + 4) = 1;
            }
            local_80 = pcVar16;
            local_78 = strlen(pcVar16);
            uVar5 = (*param_2)(&local_b8,param_3);
            CRYPTO_free(pcVar16);
            goto LAB_00480e33;
          }
          if (((*(int *)(param_1 + 8) - 5U < 2) || (*(int *)(param_1 + 8) == 0)) &&
             ((iVar4 = OPENSSL_strncasecmp(pcVar16,(char *)((long)param_1 + 0x24),sVar7), iVar4 == 0
              && (pcVar16[sVar7] == '.')))) {
            pcVar16 = pcVar16 + sVar7 + 1;
            iVar4 = *(int *)(param_1 + 8);
            cVar2 = *pcVar16;
            if (cVar2 == 'r') {
              if ((iVar4 == 0) || (iVar4 == 6)) {
                cVar2 = pcVar16[1];
                pcVar16 = pcVar16 + 1;
                goto LAB_00480c8c;
              }
            }
            else if (iVar4 != 6) {
LAB_00480c8c:
              ppuVar8 = __ctype_b_loc();
              if ((*(byte *)((long)*ppuVar8 + (long)cVar2 * 2 + 1) & 8) != 0) {
                do {
                  pcVar1 = pcVar16 + 1;
                  pcVar16 = pcVar16 + 1;
                } while ((*(byte *)((long)*ppuVar8 + (long)*pcVar1 * 2 + 1) & 8) != 0);
                if (*pcVar1 == '\0') goto LAB_00480cc0;
              }
            }
          }
        }
        pcVar16 = (char *)OPENSSL_DIR_read(param_1 + 3,param_1[1]);
        param_1[6] = pcVar16;
        piVar11 = __errno_location();
        iVar4 = *piVar11;
        *(int *)(param_1 + 7) = iVar4;
      } while (pcVar16 != (char *)0x0);
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 4) = 1;
      }
    }
    if (*(int *)(param_1 + 4) == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/storemgmt/file_store.c",0x290,
                    "file_load_dir_entry");
      ERR_set_error(2,*(undefined4 *)(param_1 + 7),0);
      uVar5 = 0;
      goto LAB_00480e33;
    }
  }
LAB_00480e30:
  uVar5 = 0;
LAB_00480e33:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar5;
}

