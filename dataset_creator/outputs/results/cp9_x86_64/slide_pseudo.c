
void slide(long param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  
  lVar5 = 0;
  do {
    *(byte *)(param_1 + lVar5) =
         (byte)((int)(uint)*(byte *)(param_2 + ((int)lVar5 >> 3)) >> ((byte)lVar5 & 7)) & 1;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x100);
  pcVar2 = (char *)(param_1 + 0x101);
  pcVar8 = (char *)(param_1 + 1);
  do {
    while (pcVar8[-1] == '\0') {
LAB_004d4ab8:
      pcVar8 = pcVar8 + 1;
      if (pcVar8 == pcVar2) {
        return;
      }
    }
    iVar10 = -(int)param_1 + (int)pcVar8;
    iVar6 = 1;
    pcVar9 = pcVar8;
    do {
      if (0xff < iVar10) goto LAB_004d4ab8;
      cVar3 = *pcVar9;
      if (cVar3 != '\0') {
        do {
          cVar4 = pcVar8[-1];
          iVar7 = (int)cVar3 << ((byte)iVar6 & 0x1f);
          if (0xf < cVar4 + iVar7) {
            if (cVar4 - iVar7 < -0xf) goto LAB_004d4b40;
            pcVar1 = pcVar9 + 1;
            pcVar8[-1] = cVar4 - (char)iVar7;
            while (*pcVar9 != '\0') {
              *pcVar9 = '\0';
              pcVar9 = pcVar9 + 1;
              if (pcVar9 == pcVar1 + (0xff - iVar10)) goto LAB_004d4b21;
            }
            *pcVar9 = '\x01';
            goto LAB_004d4b21;
          }
          pcVar8[-1] = cVar4 + (char)iVar7;
          *pcVar9 = '\0';
          do {
            pcVar1 = pcVar9 + 1;
LAB_004d4b21:
            pcVar9 = pcVar1;
            iVar6 = iVar6 + 1;
            iVar10 = iVar10 + 1;
            if (iVar6 == 7) goto LAB_004d4b40;
            while (0xff < iVar10) {
LAB_004d4b40:
              do {
                pcVar9 = pcVar8 + 1;
                if (pcVar9 == pcVar2) {
                  return;
                }
                cVar3 = *pcVar8;
                pcVar8 = pcVar9;
              } while (cVar3 == '\0');
              iVar6 = 1;
              iVar10 = -(int)param_1 + (int)pcVar9;
            }
            cVar3 = *pcVar9;
          } while (cVar3 == '\0');
        } while( true );
      }
      pcVar9 = pcVar9 + 1;
      iVar6 = iVar6 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar6 != 7);
    pcVar8 = pcVar8 + 1;
    if (pcVar8 == pcVar2) {
      return;
    }
  } while( true );
}

