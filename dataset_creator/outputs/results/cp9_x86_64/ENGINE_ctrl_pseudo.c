
int ENGINE_ctrl(ENGINE *e,int cmd,long i,void *p,f *f)

{
  code *UNRECOVERED_JUMPTABLE;
  int *piVar1;
  uint *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  uint *puVar7;
  int *piVar8;
  char *__src;
  int iVar9;
  
  if (e == (ENGINE *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/engine/eng_ctrl.c",0x84,"ENGINE_ctrl");
    ERR_set_error(0x26,0xc0102,0);
    return 0;
  }
  iVar4 = CRYPTO_THREAD_write_lock(global_engine_lock);
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = *(int *)(e + 0x9c);
  CRYPTO_THREAD_unlock(global_engine_lock);
  UNRECOVERED_JUMPTABLE = *(code **)(e + 0x70);
  if (iVar4 < 1) {
    ERR_new();
    ERR_set_debug("../crypto/engine/eng_ctrl.c",0x8d,"ENGINE_ctrl");
    ERR_set_error(0x26,0x82,0);
    return 0;
  }
  if (cmd == 10) {
    return (int)(UNRECOVERED_JUMPTABLE != (code *)0x0);
  }
  if (7 < cmd - 0xbU) {
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/engine/eng_ctrl.c",0xaf,"ENGINE_ctrl");
      ERR_set_error(0x26,0x78,0);
      return 0;
    }
LAB_005f1075:
                    /* WARNING: Could not recover jumptable at 0x005f1092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar4 = (*UNRECOVERED_JUMPTABLE)(e,cmd,i,p,f);
    return iVar4;
  }
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/engine/eng_ctrl.c",0xa2,"ENGINE_ctrl");
    ERR_set_error(0x26,0x78,0);
    return -1;
  }
  if ((*(uint *)(e + 0x98) & 2) != 0) goto LAB_005f1075;
  if (cmd == 0xb) {
    puVar2 = *(uint **)(e + 0x90);
    if (puVar2 == (uint *)0x0) {
      return 0;
    }
    uVar5 = *puVar2;
    if (uVar5 == 0) {
      return 0;
    }
    lVar3 = *(long *)(puVar2 + 2);
joined_r0x005f1394:
    if (lVar3 == 0) {
      return 0;
    }
    return uVar5;
  }
  if (((cmd & 0xfffffffdU) == 0xd) || (cmd == 0x11)) {
    if (p == (void *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/engine/eng_ctrl.c",0x52,"int_ctrl_helper");
      ERR_set_error(0x26,0xc0102,0);
      return -1;
    }
    if (cmd == 0xd) {
      piVar1 = *(int **)(e + 0x90);
      if (piVar1 != (int *)0x0) {
        iVar4 = *piVar1;
        iVar9 = 0;
        for (piVar8 = piVar1; (iVar4 != 0 && (*(char **)(piVar8 + 2) != (char *)0x0));
            piVar8 = piVar8 + 8) {
          iVar4 = strcmp(*(char **)(piVar8 + 2),(char *)p);
          if (iVar4 == 0) {
            return piVar1[(long)iVar9 * 8];
          }
          iVar4 = piVar8[8];
          iVar9 = iVar9 + 1;
        }
      }
      ERR_new();
      ERR_set_debug("../crypto/engine/eng_ctrl.c",0x5a,"int_ctrl_helper");
      ERR_set_error(0x26,0x89,0);
      return -1;
    }
  }
  puVar2 = *(uint **)(e + 0x90);
  if (puVar2 == (uint *)0x0) {
LAB_005f1252:
    ERR_new();
    ERR_set_debug("../crypto/engine/eng_ctrl.c",0x65,"int_ctrl_helper");
    ERR_set_error(0x26,0x8a,0);
    return -1;
  }
  uVar5 = *puVar2;
  iVar4 = 0;
  puVar7 = puVar2;
  if (uVar5 != 0) {
    do {
      if ((*(long *)(puVar7 + 2) == 0) || ((uint)i <= uVar5)) goto LAB_005f1290;
      uVar5 = puVar7[8];
      puVar7 = puVar7 + 8;
      iVar4 = iVar4 + 1;
    } while (uVar5 != 0);
    goto LAB_005f1252;
  }
LAB_005f1290:
  if ((uint)i != uVar5) goto LAB_005f1252;
  switch(cmd) {
  case 0xc:
    uVar5 = puVar2[(long)iVar4 * 8 + 8];
    if (uVar5 == 0) {
      return 0;
    }
    lVar3 = *(long *)(puVar2 + (long)iVar4 * 8 + 10);
    goto joined_r0x005f1394;
  default:
    ERR_new();
    ERR_set_debug("../crypto/engine/eng_ctrl.c",0x7c,"int_ctrl_helper");
    ERR_set_error(0x26,0x6e,0);
    uVar5 = 0xffffffff;
    break;
  case 0xe:
    sVar6 = strlen(*(char **)(puVar2 + (long)iVar4 * 8 + 2));
    uVar5 = (uint)sVar6;
    break;
  case 0xf:
    strcpy((char *)p,*(char **)(puVar2 + (long)iVar4 * 8 + 2));
    sVar6 = strlen((char *)p);
    uVar5 = (uint)sVar6;
    break;
  case 0x10:
    p = *(void **)(puVar2 + (long)iVar4 * 8 + 4);
    if ((char *)p == (char *)0x0) {
      p = "";
    }
    goto LAB_005f12df;
  case 0x11:
    __src = *(char **)(puVar2 + (long)iVar4 * 8 + 4);
    if (__src == (char *)0x0) {
      __src = "";
    }
    strcpy((char *)p,__src);
LAB_005f12df:
    sVar6 = strlen((char *)p);
    uVar5 = (uint)sVar6;
    break;
  case 0x12:
    uVar5 = puVar2[(long)iVar4 * 8 + 6];
  }
  return uVar5;
}

