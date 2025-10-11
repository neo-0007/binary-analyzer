
void res_setoptions(long param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  bVar1 = *param_2;
  if (bVar1 == 0) {
    return;
  }
  do {
    if (bVar1 != 0x20) goto LAB_007a4315;
    do {
      do {
        bVar1 = param_2[1];
        param_2 = param_2 + 1;
      } while (bVar1 == 0x20);
LAB_007a4315:
    } while (bVar1 == 9);
    iVar2 = strncmp((char *)param_2,"ndots:",6);
    if (iVar2 == 0) {
      lVar4 = strtoll((char *)(param_2 + 6),(char **)0x0,10);
      iVar2 = (int)lVar4;
      if (0xf < iVar2) {
        iVar2 = 0xf;
      }
      *(int *)(param_1 + 0xe4) = iVar2;
    }
    else {
      iVar2 = strncmp((char *)param_2,"timeout:",8);
      if (iVar2 == 0) {
        lVar4 = strtoll((char *)(param_2 + 8),(char **)0x0,10);
        iVar2 = (int)lVar4;
        if (0x1e < iVar2) {
          iVar2 = 0x1e;
        }
        *(int *)(param_1 + 0xdc) = iVar2;
      }
      else {
        iVar2 = strncmp((char *)param_2,"attempts:",9);
        if (iVar2 == 0) {
          lVar4 = strtoll((char *)(param_2 + 9),(char **)0x0,10);
          iVar2 = (int)lVar4;
          if (5 < iVar2) {
            iVar2 = 5;
          }
          *(int *)(param_1 + 0xe0) = iVar2;
        }
        else {
          iVar2 = strncmp((char *)param_2,"rotate",6);
          if (iVar2 == 0) {
            uVar3 = 0x4000;
          }
          else {
            iVar2 = strncmp((char *)param_2,"edns0",5);
            if (iVar2 == 0) {
              uVar3 = 0x100000;
            }
            else {
              iVar2 = strncmp((char *)param_2,"single-request-reopen",0x15);
              if (iVar2 == 0) {
                uVar3 = 0x400000;
              }
              else {
                iVar2 = strncmp((char *)param_2,"single-request",0xe);
                if (iVar2 == 0) {
                  uVar3 = 0x200000;
                }
                else {
                  iVar2 = strncmp((char *)param_2,"no_tld_query",0xc);
                  if ((iVar2 == 0) ||
                     (iVar2 = strncmp((char *)param_2,"no-tld-query",0xc), iVar2 == 0)) {
                    uVar3 = 0x1000000;
                  }
                  else {
                    iVar2 = strncmp((char *)param_2,"no-reload",9);
                    if (iVar2 == 0) {
                      uVar3 = 0x2000000;
                    }
                    else {
                      iVar2 = strncmp((char *)param_2,"use-vc",6);
                      if (iVar2 == 0) {
                        uVar3 = 8;
                      }
                      else {
                        iVar2 = strncmp((char *)param_2,"trust-ad",8);
                        if (iVar2 != 0) goto LAB_007a4390;
                        uVar3 = 0x4000000;
                      }
                    }
                  }
                }
              }
            }
          }
          *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | uVar3;
        }
      }
    }
LAB_007a4390:
    for (; (bVar1 = *param_2, (bVar1 & 0xdf) != 0 && (bVar1 != 9)); param_2 = param_2 + 1) {
    }
    if (bVar1 == 0) {
      return;
    }
  } while( true );
}

