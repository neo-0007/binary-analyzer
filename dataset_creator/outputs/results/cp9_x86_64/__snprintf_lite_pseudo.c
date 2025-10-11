
/* __gnu_cxx::__snprintf_lite(char*, unsigned long, char const*, __va_list_tag*) */

int __gnu_cxx::__snprintf_lite(char *param_1,ulong param_2,char *param_3,__va_list_tag *param_4)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  pcVar1 = param_1 + (param_2 - 1);
  cVar3 = *param_3;
  pcVar8 = param_1;
  if (cVar3 != '\0') {
    if (param_1 < pcVar1) {
      do {
        if (cVar3 != '%') goto LAB_0068f708;
        cVar3 = param_3[1];
        if (cVar3 == 's') {
          uVar2 = *(uint *)param_4;
          if (uVar2 < 0x30) {
            puVar6 = (undefined8 *)((ulong)uVar2 + *(long *)(param_4 + 0x10));
            *(uint *)param_4 = uVar2 + 8;
          }
          else {
            puVar6 = *(undefined8 **)(param_4 + 8);
            *(undefined8 **)(param_4 + 8) = puVar6 + 1;
          }
          pcVar7 = (char *)*puVar6;
          cVar3 = *pcVar7;
          if (cVar3 != '\0') {
            pcVar9 = pcVar8;
            if (pcVar1 <= pcVar8) {
LAB_0068f812:
              pcVar8 = param_1;
              __throw_insufficient_space(param_1,pcVar9);
              break;
            }
            while( true ) {
              pcVar7 = pcVar7 + 1;
              *pcVar8 = cVar3;
              pcVar8 = pcVar8 + 1;
              cVar3 = *pcVar7;
              if (cVar3 == '\0') break;
              pcVar9 = pcVar1;
              if (pcVar1 == pcVar8) goto LAB_0068f812;
            }
          }
          param_3 = param_3 + 2;
LAB_0068f716:
          cVar3 = *param_3;
        }
        else {
          if (cVar3 != 'z') {
            if (cVar3 != '%') goto LAB_0068f708;
            param_3 = param_3 + 1;
            cVar3 = '%';
LAB_0068f70b:
            *pcVar8 = cVar3;
            param_3 = param_3 + 1;
            pcVar8 = pcVar8 + 1;
            goto LAB_0068f716;
          }
          if (param_3[2] != 'u') {
LAB_0068f708:
            cVar3 = *param_3;
            goto LAB_0068f70b;
          }
          uVar2 = *(uint *)param_4;
          if (uVar2 < 0x30) {
            puVar5 = (ulong *)((ulong)uVar2 + *(long *)(param_4 + 0x10));
            *(uint *)param_4 = uVar2 + 8;
          }
          else {
            puVar5 = *(ulong **)(param_4 + 8);
            *(ulong **)(param_4 + 8) = puVar5 + 1;
          }
          iVar4 = __concat_size_t(pcVar8,(long)pcVar1 - (long)pcVar8,*puVar5);
          if (iVar4 < 1) break;
          param_3 = param_3 + 3;
          pcVar8 = pcVar8 + iVar4;
          cVar3 = *param_3;
        }
        if (cVar3 == '\0') {
          iVar4 = (int)pcVar8 - (int)param_1;
          goto LAB_0068f795;
        }
      } while (pcVar8 < pcVar1);
    }
    __throw_insufficient_space(param_1,pcVar8);
    pcVar8 = param_1;
  }
  iVar4 = 0;
LAB_0068f795:
  *pcVar8 = '\0';
  return iVar4;
}

