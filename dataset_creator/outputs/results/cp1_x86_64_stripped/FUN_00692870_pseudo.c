
int FUN_00692870(char *param_1,long param_2,char *param_3,uint *param_4)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  pcVar1 = param_1 + param_2 + -1;
  cVar3 = *param_3;
  pcVar7 = param_1;
  if (cVar3 != '\0') {
    if (param_1 < pcVar1) {
      do {
        if (cVar3 != '%') goto LAB_006928a8;
        cVar3 = param_3[1];
        if (cVar3 == 's') {
          uVar2 = *param_4;
          if (uVar2 < 0x30) {
            puVar5 = (undefined8 *)((ulong)uVar2 + *(long *)(param_4 + 4));
            *param_4 = uVar2 + 8;
          }
          else {
            puVar5 = *(undefined8 **)(param_4 + 2);
            *(undefined8 **)(param_4 + 2) = puVar5 + 1;
          }
          pcVar6 = (char *)*puVar5;
          cVar3 = *pcVar6;
          if (cVar3 != '\0') {
            pcVar8 = pcVar7;
            if (pcVar1 <= pcVar7) {
LAB_006929b2:
              pcVar7 = param_1;
              FUN_00692630(param_1,pcVar8);
              break;
            }
            while( true ) {
              pcVar6 = pcVar6 + 1;
              *pcVar7 = cVar3;
              pcVar7 = pcVar7 + 1;
              cVar3 = *pcVar6;
              if (cVar3 == '\0') break;
              pcVar8 = pcVar1;
              if (pcVar1 == pcVar7) goto LAB_006929b2;
            }
          }
          param_3 = param_3 + 2;
LAB_006928b6:
          cVar3 = *param_3;
        }
        else {
          if (cVar3 != 'z') {
            if (cVar3 != '%') goto LAB_006928a8;
            param_3 = param_3 + 1;
            cVar3 = '%';
LAB_006928ab:
            *pcVar7 = cVar3;
            param_3 = param_3 + 1;
            pcVar7 = pcVar7 + 1;
            goto LAB_006928b6;
          }
          if (param_3[2] != 'u') {
LAB_006928a8:
            cVar3 = *param_3;
            goto LAB_006928ab;
          }
          uVar2 = *param_4;
          if (uVar2 < 0x30) {
            puVar5 = (undefined8 *)((ulong)uVar2 + *(long *)(param_4 + 4));
            *param_4 = uVar2 + 8;
          }
          else {
            puVar5 = *(undefined8 **)(param_4 + 2);
            *(undefined8 **)(param_4 + 2) = puVar5 + 1;
          }
          iVar4 = FUN_00692780(pcVar7,(long)pcVar1 - (long)pcVar7,*puVar5);
          if (iVar4 < 1) break;
          param_3 = param_3 + 3;
          pcVar7 = pcVar7 + iVar4;
          cVar3 = *param_3;
        }
        if (cVar3 == '\0') {
          iVar4 = (int)pcVar7 - (int)param_1;
          goto LAB_00692935;
        }
      } while (pcVar7 < pcVar1);
    }
    FUN_00692630(param_1,pcVar7);
    pcVar7 = param_1;
  }
  iVar4 = 0;
LAB_00692935:
  *pcVar7 = '\0';
  return iVar4;
}

