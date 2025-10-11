
undefined8 int_engine_module_init(CONF_IMODULE *param_1,CONF *param_2)

{
  char *section;
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  stack_st_CONF_VALUE *psVar5;
  long lVar6;
  char *pcVar7;
  stack_st_CONF_VALUE *psVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  long in_FS_OFFSET;
  ENGINE *local_78;
  char *local_70;
  int local_64;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar4 = CONF_imodule_get_value(param_1);
  psVar5 = NCONF_get_section(param_2,pcVar4);
  local_64 = 0;
  if (psVar5 == (stack_st_CONF_VALUE *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/engine/eng_cnf.c",0x9e,"int_engine_module_init");
    ERR_set_error(0x26,0x94,0);
    uVar11 = 0;
  }
  else {
    iVar2 = OPENSSL_sk_num(psVar5);
    if (0 < iVar2) {
      do {
        lVar6 = OPENSSL_sk_value(psVar5,local_64);
        local_48 = -1;
        pcVar4 = *(char **)(lVar6 + 8);
        section = *(char **)(lVar6 + 0x10);
        pcVar7 = strchr(pcVar4,0x2e);
        local_70 = pcVar7 + 1;
        if (pcVar7 == (char *)0x0) {
          local_70 = pcVar4;
        }
        psVar8 = NCONF_get_section(param_2,section);
        if (psVar8 == (stack_st_CONF_VALUE *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/engine/eng_cnf.c",0x3c,"int_engine_configure");
          ERR_set_error(0x26,0x95,0);
          uVar11 = 0;
          goto LAB_005f0d81;
        }
        bVar1 = false;
        local_78 = (ENGINE *)0x0;
        for (iVar2 = 0; iVar3 = OPENSSL_sk_num(psVar8), iVar2 < iVar3; iVar2 = iVar2 + 1) {
          puVar9 = (undefined8 *)OPENSSL_sk_value(psVar8,iVar2);
          pcVar4 = (char *)puVar9[1];
          pcVar10 = strchr(pcVar4,0x2e);
          pcVar7 = (char *)puVar9[2];
          if (pcVar10 != (char *)0x0) {
            pcVar4 = pcVar10 + 1;
          }
          iVar3 = strcmp(pcVar4,"engine_id");
          if (iVar3 != 0) {
            iVar3 = strcmp(pcVar4,"soft_load");
            if (iVar3 != 0) {
              iVar3 = strcmp(pcVar4,"dynamic_path");
              if (iVar3 == 0) {
                local_78 = ENGINE_by_id("dynamic");
                if (local_78 != (ENGINE *)0x0) {
                  iVar3 = ENGINE_ctrl_cmd_string(local_78,"SO_PATH",pcVar7,0);
                  if (((iVar3 == 0) ||
                      (iVar3 = ENGINE_ctrl_cmd_string(local_78,"LIST_ADD","2",0), iVar3 == 0)) ||
                     (iVar3 = ENGINE_ctrl_cmd_string(local_78,"LOAD",(char *)0x0,0),
                     pcVar7 = local_70, iVar3 == 0)) goto LAB_005f0d3e;
                  goto LAB_005f0c50;
                }
LAB_005f0e6e:
                local_78 = (ENGINE *)0x0;
              }
              else {
                if ((local_78 == (ENGINE *)0x0) &&
                   (local_78 = ENGINE_by_id(local_70), local_78 == (ENGINE *)0x0)) {
                  if (!bVar1) goto LAB_005f0e6e;
                  ERR_clear_error();
                  goto LAB_005f0e9c;
                }
                iVar3 = strcmp(pcVar7,"EMPTY");
                if (iVar3 == 0) {
                  pcVar7 = (char *)0x0;
                }
                iVar3 = strcmp(pcVar4,"init");
                if (iVar3 == 0) {
                  iVar3 = NCONF_get_number_e(param_2,section,"init",&local_48);
                  if (iVar3 != 0) {
                    if (local_48 == 1) {
                      iVar3 = int_engine_init(local_78);
                      goto joined_r0x005f0c41;
                    }
                    pcVar7 = local_70;
                    if (local_48 == 0) goto LAB_005f0c50;
                    ERR_new();
                    ERR_set_debug("../crypto/engine/eng_cnf.c",0x76,"int_engine_configure");
                    ERR_set_error(0x26,0x97,0);
                  }
                }
                else {
                  iVar3 = strcmp(pcVar4,"default_algorithms");
                  if (iVar3 == 0) {
                    iVar3 = ENGINE_set_default_string(local_78,pcVar7);
                  }
                  else {
                    iVar3 = ENGINE_ctrl_cmd_string(local_78,pcVar4,pcVar7,0);
                  }
joined_r0x005f0c41:
                  pcVar7 = local_70;
                  if (iVar3 != 0) goto LAB_005f0c50;
                }
              }
LAB_005f0d3e:
              ERR_new();
              ERR_set_debug("../crypto/engine/eng_cnf.c",0x8b,"int_engine_configure");
              ERR_set_error(0x26,0x66,"section=%s, name=%s, value=%s",*puVar9,puVar9[1],puVar9[2]);
              goto LAB_005f0d76;
            }
            bVar1 = true;
            pcVar7 = local_70;
          }
LAB_005f0c50:
          local_70 = pcVar7;
        }
        if (((local_78 != (ENGINE *)0x0) && (local_48 == -1)) &&
           (iVar2 = int_engine_init(local_78), iVar2 == 0)) {
          ERR_new();
          ERR_set_debug("../crypto/engine/eng_cnf.c",0x89,"int_engine_configure");
          ERR_set_error(0x26,0x66,0);
LAB_005f0d76:
          ENGINE_free(local_78);
          uVar11 = 0;
          goto LAB_005f0d81;
        }
        ENGINE_free(local_78);
LAB_005f0e9c:
        local_64 = local_64 + 1;
        iVar2 = OPENSSL_sk_num(psVar5);
      } while (local_64 < iVar2);
    }
    uVar11 = 1;
  }
LAB_005f0d81:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar11;
}

