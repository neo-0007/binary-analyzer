
void set_binding_values_part_0(char *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 *puVar9;
  
  pthread_rwlock_wrlock((pthread_rwlock_t *)_nl_state_lock);
  for (puVar6 = _nl_domain_bindings; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
    iVar3 = strcmp(param_1,(char *)(puVar6 + 3));
    if (iVar3 == 0) {
      bVar2 = false;
      if (param_2 == (long *)0x0) {
LAB_006d8a34:
        if (param_3 == (long *)0x0) goto LAB_006d8a8f;
LAB_006d8a39:
        pcVar8 = (char *)*param_3;
        pcVar7 = (char *)puVar6[2];
        if (pcVar8 == (char *)0x0) {
LAB_006d8bcd:
          *param_3 = (long)pcVar7;
          goto LAB_006d8a8f;
        }
      }
      else {
        pcVar8 = (char *)*param_2;
        pcVar7 = (char *)puVar6[1];
        if (pcVar8 == (char *)0x0) {
          *param_2 = (long)pcVar7;
          goto LAB_006d8a34;
        }
        iVar3 = strcmp(pcVar8,pcVar7);
        if (iVar3 == 0) {
          *param_2 = (long)pcVar7;
          if (param_3 != (long *)0x0) {
            pcVar8 = (char *)*param_3;
            pcVar7 = (char *)puVar6[2];
            if (pcVar8 != (char *)0x0) goto LAB_006d8a49;
            goto LAB_006d8bcd;
          }
          goto LAB_006d8a8f;
        }
        iVar3 = strcmp(pcVar8,"/usr/share/locale");
        pcVar4 = "/usr/share/locale";
        if (iVar3 != 0) {
          pcVar4 = strdup(pcVar8);
          if (pcVar4 != (char *)0x0) {
            pcVar7 = (char *)puVar6[1];
            goto LAB_006d89ef;
          }
          *param_2 = 0;
          if (param_3 != (long *)0x0) goto LAB_006d8a39;
          goto LAB_006d8a8f;
        }
LAB_006d89ef:
        if (pcVar7 != "/usr/share/locale") {
          free(pcVar7);
        }
        puVar6[1] = pcVar4;
        *param_2 = (long)pcVar4;
        if (param_3 == (long *)0x0) goto LAB_006d8a88;
        pcVar8 = (char *)*param_3;
        pcVar7 = (char *)puVar6[2];
        bVar2 = true;
        if (pcVar8 == (char *)0x0) {
          *param_3 = (long)pcVar7;
          goto LAB_006d8a88;
        }
      }
LAB_006d8a49:
      if (((pcVar7 == (char *)0x0) || (iVar3 = strcmp(pcVar8,pcVar7), iVar3 != 0)) &&
         (pcVar7 = strdup(pcVar8), pcVar7 != (char *)0x0)) {
        free((void *)puVar6[2]);
        puVar6[2] = pcVar7;
        *param_3 = (long)pcVar7;
        goto LAB_006d8a88;
      }
      *param_3 = (long)pcVar7;
      if (bVar2) goto LAB_006d8a88;
      goto LAB_006d8a8f;
    }
    if (iVar3 < 0) break;
  }
  if (param_2 == (long *)0x0) {
    if (param_3 == (long *)0x0) goto LAB_006d8a8f;
    if (*param_3 != 0) {
      sVar5 = strlen(param_1);
      puVar6 = (undefined8 *)malloc(sVar5 + 0x19);
      if (puVar6 != (undefined8 *)0x0) {
        memcpy(puVar6 + 3,param_1,sVar5 + 1);
        puVar6[1] = "/usr/share/locale";
LAB_006d8b2e:
        pcVar8 = (char *)*param_3;
        if ((pcVar8 == (char *)0x0) || (pcVar8 = strdup(pcVar8), pcVar8 != (char *)0x0)) {
          *param_3 = (long)pcVar8;
          goto LAB_006d8b52;
        }
        if ((char *)puVar6[1] != "/usr/share/locale") {
          free((char *)puVar6[1]);
        }
        free(puVar6);
        if (param_2 != (long *)0x0) goto LAB_006d8cff;
      }
    }
  }
  else {
    pcVar8 = (char *)*param_2;
    if (pcVar8 == (char *)0x0) {
      if (param_3 == (long *)0x0) {
        *param_2 = (long)"/usr/share/locale";
        goto LAB_006d8a8f;
      }
      if (*param_3 != 0) {
        sVar5 = strlen(param_1);
        puVar6 = (undefined8 *)malloc(sVar5 + 0x19);
        if (puVar6 != (undefined8 *)0x0) {
          memcpy(puVar6 + 3,param_1,sVar5 + 1);
          pcVar8 = (char *)*param_2;
          if (pcVar8 != (char *)0x0) goto LAB_006d8af3;
          pcVar7 = "/usr/share/locale";
          goto LAB_006d8b1f;
        }
        goto LAB_006d8cff;
      }
      *param_2 = (long)"/usr/share/locale";
    }
    else {
      sVar5 = strlen(param_1);
      puVar6 = (undefined8 *)malloc(sVar5 + 0x19);
      if (puVar6 == (undefined8 *)0x0) {
LAB_006d8cff:
        *param_2 = 0;
      }
      else {
        memcpy(puVar6 + 3,param_1,sVar5 + 1);
LAB_006d8af3:
        iVar3 = strcmp(pcVar8,"/usr/share/locale");
        pcVar7 = "/usr/share/locale";
        if ((iVar3 == 0) || (pcVar7 = strdup(pcVar8), pcVar7 != (char *)0x0)) {
LAB_006d8b1f:
          *param_2 = (long)pcVar7;
          pcVar8 = (char *)0x0;
          puVar6[1] = pcVar7;
          if (param_3 != (long *)0x0) goto LAB_006d8b2e;
LAB_006d8b52:
          puVar1 = _nl_domain_bindings;
          puVar6[2] = pcVar8;
          if ((puVar1 == (undefined8 *)0x0) ||
             (iVar3 = strcmp(param_1,(char *)(puVar1 + 3)), iVar3 < 0)) {
            *puVar6 = puVar1;
            _nl_domain_bindings = puVar6;
          }
          else {
            do {
              puVar9 = puVar1;
              puVar1 = (undefined8 *)*puVar9;
              if (puVar1 == (undefined8 *)0x0) break;
              iVar3 = strcmp(param_1,(char *)(puVar1 + 3));
            } while (0 < iVar3);
            *puVar6 = puVar1;
            *puVar9 = puVar6;
          }
LAB_006d8a88:
          _nl_msg_cat_cntr = _nl_msg_cat_cntr + 1;
          goto LAB_006d8a8f;
        }
        free(puVar6);
        if (param_2 != (long *)0x0) goto LAB_006d8cff;
      }
      if (param_3 == (long *)0x0) goto LAB_006d8a8f;
    }
  }
  *param_3 = 0;
LAB_006d8a8f:
  pthread_rwlock_unlock((pthread_rwlock_t *)_nl_state_lock);
  return;
}

