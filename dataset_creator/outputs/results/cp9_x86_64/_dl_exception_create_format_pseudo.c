
void _dl_exception_create_format
               (undefined8 *param_1,char *param_2,char *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  size_t sVar2;
  undefined1 (*pauVar3) [16];
  void *pvVar4;
  undefined1 (*pauVar5) [16];
  char *pcVar6;
  ulong uVar7;
  uint *puVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*__dest) [16];
  undefined1 (*__dest_00) [16];
  size_t local_a0;
  uint local_80;
  uint *local_78;
  uint local_68 [6];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_50 = param_4;
  local_48 = param_5;
  local_40 = param_6;
  if (param_2 == (char *)0x0) {
    local_a0 = 1;
    pauVar9 = (undefined1 (*) [16])&_nl_current_LC_PAPER_used;
    param_2 = "";
  }
  else {
    sVar2 = strlen(param_2);
    local_a0 = sVar2 + 1;
    pauVar9 = (undefined1 (*) [16])(sVar2 + 2);
  }
  local_78 = (uint *)&stack0x00000008;
  local_80 = 0x18;
  cVar1 = *param_3;
  pcVar6 = param_3;
  if (cVar1 != '\0') {
LAB_0077ab6b:
    do {
      if (cVar1 == '%') {
        cVar1 = pcVar6[1];
        if (cVar1 == 'x') {
LAB_0077acf2:
          pauVar9 = (undefined1 (*) [16])(*pauVar9 + 8);
          pcVar6 = pcVar6 + 1;
        }
        else {
          if (cVar1 < 'y') {
            if (cVar1 == 'l') {
LAB_0077ace8:
              if (pcVar6[2] == 'x') {
                pauVar9 = pauVar9 + 1;
                pcVar6 = pcVar6 + 2;
                goto LAB_0077ab5f;
              }
              goto LAB_0077acf2;
            }
            if (cVar1 == 's') {
              if (local_80 < 0x30) {
                uVar7 = (ulong)local_80;
                local_80 = local_80 + 8;
                puVar8 = (uint *)((long)local_68 + uVar7);
              }
              else {
                puVar8 = local_78;
                local_78 = (uint *)((long)local_78 + 8);
              }
              sVar2 = strlen(*(char **)puVar8);
              pauVar9 = (undefined1 (*) [16])(*pauVar9 + sVar2);
              cVar1 = pcVar6[2];
              pcVar6 = pcVar6 + 2;
              if (cVar1 == '\0') break;
              goto LAB_0077ab6b;
            }
          }
          else if (cVar1 == 'z') goto LAB_0077ace8;
          pauVar9 = (undefined1 (*) [16])(*pauVar9 + 1);
          pcVar6 = pcVar6 + 1;
        }
      }
      else {
        pauVar9 = (undefined1 (*) [16])(*pauVar9 + 1);
      }
LAB_0077ab5f:
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if ((long)pauVar9 < 0) goto LAB_0077ae60;
  }
  __dest_00 = pauVar9;
  pauVar3 = (undefined1 (*) [16])malloc((size_t)pauVar9);
  if (pauVar3 != (undefined1 (*) [16])0x0) {
    local_80 = 0x18;
    pauVar9 = (undefined1 (*) [16])(*pauVar3 + (long)*pauVar9);
    param_1[1] = pauVar3;
    param_1[2] = pauVar3;
    local_78 = (uint *)&stack0x00000008;
    cVar1 = *param_3;
joined_r0x0077ac1e:
    __dest = pauVar3;
    if (cVar1 != '\0') {
      do {
        if (cVar1 == '%') {
          cVar1 = param_3[1];
          pcVar6 = param_3 + 1;
          if (cVar1 == 's') {
            if (local_80 < 0x30) {
              uVar7 = (ulong)local_80;
              local_80 = local_80 + 8;
              puVar8 = (uint *)((long)local_68 + uVar7);
            }
            else {
              puVar8 = local_78;
              local_78 = local_78 + 2;
            }
            pauVar3 = *(undefined1 (**) [16])puVar8;
            __dest_00 = pauVar3;
            sVar2 = strlen((char *)pauVar3);
            if ((ulong)((long)pauVar9 - (long)__dest) < sVar2) goto LAB_0077aece;
            pauVar3 = (undefined1 (*) [16])mempcpy(__dest,pauVar3,sVar2);
            __dest_00 = __dest;
          }
          else {
            if (cVar1 < 't') {
              if (cVar1 == '%') goto code_r0x0077ac6b;
              if (cVar1 != 'l') goto LAB_0077adc4;
            }
            else {
              if (cVar1 == 'x') {
                if (local_80 < 0x30) {
                  uVar7 = (ulong)local_80;
                  local_80 = local_80 + 8;
                  puVar8 = (uint *)((long)local_68 + uVar7);
                }
                else {
                  puVar8 = local_78;
                  local_78 = local_78 + 2;
                }
                __dest_00 = (undefined1 (*) [16])(ulong)*puVar8;
                pauVar3 = (undefined1 (*) [16])(*__dest + 8);
                pauVar5 = (undefined1 (*) [16])_itoa_word(__dest_00,pauVar3,0x10,0);
                if (pauVar5 != __dest) {
                  memset(__dest,0x30,(long)pauVar5 - (long)__dest);
                  __dest_00 = __dest;
                }
                goto LAB_0077ac3b;
              }
              if (cVar1 != 'z') goto LAB_0077adc4;
            }
            if (param_3[2] != 'x') {
LAB_0077adc4:
                    /* WARNING: Subroutine does not return */
              _dl_fatal_printf("Fatal error: invalid format in exception string\n");
            }
            if (local_80 < 0x30) {
              uVar7 = (ulong)local_80;
              local_80 = local_80 + 8;
              puVar8 = (uint *)((long)local_68 + uVar7);
            }
            else {
              puVar8 = local_78;
              local_78 = local_78 + 2;
            }
            pauVar3 = __dest + 1;
            __dest_00 = *(undefined1 (**) [16])puVar8;
            pauVar5 = (undefined1 (*) [16])_itoa_word(__dest_00,pauVar3,0x10,0);
            if (pauVar5 != __dest) {
              memset(__dest,0x30,(long)pauVar5 - (long)__dest);
              __dest_00 = __dest;
            }
            pcVar6 = param_3 + 2;
          }
        }
        else {
          if (pauVar9 == __dest) goto LAB_0077aece;
          (*__dest)[0] = cVar1;
          pauVar3 = (undefined1 (*) [16])(*__dest + 1);
          pcVar6 = param_3;
        }
LAB_0077ac3b:
        cVar1 = pcVar6[1];
        param_3 = pcVar6 + 1;
        __dest = pauVar3;
        if (cVar1 == '\0') break;
      } while( true );
    }
    if (pauVar9 != pauVar3) {
      __dest_00 = (undefined1 (*) [16])(*pauVar3 + 1);
      (*pauVar3)[0] = 0;
      if ((long)pauVar9 - (long)__dest_00 == local_a0) {
        pvVar4 = memcpy(__dest_00,param_2,local_a0);
        *param_1 = pvVar4;
        return;
      }
    }
LAB_0077aece:
    length_mismatch();
    free(*(void **)__dest_00[1]);
    *(undefined8 *)__dest_00[1] = 0;
    *__dest_00 = (undefined1  [16])0x0;
    return;
  }
LAB_0077ae60:
  param_1[2] = 0;
  *param_1 = &DAT_008343a2;
  param_1[1] = "out of memory";
  return;
code_r0x0077ac6b:
  if (pauVar9 == __dest) goto LAB_0077aece;
  cVar1 = param_3[2];
  (*__dest)[0] = 0x25;
  param_3 = param_3 + 2;
  pauVar3 = (undefined1 (*) [16])(*__dest + 1);
  goto joined_r0x0077ac1e;
}

