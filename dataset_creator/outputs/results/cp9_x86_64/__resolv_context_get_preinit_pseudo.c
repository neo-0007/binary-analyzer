
undefined8 * __resolv_context_get_preinit(void)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int *piVar4;
  ulong uVar5;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  undefined8 *__ptr;
  long lVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  
  puVar3 = *(undefined8 **)(in_FS_OFFSET + -0x10);
  if (puVar3 == (undefined8 *)0x0) {
    uVar10 = *(undefined8 *)(in_FS_OFFSET + -0x70);
    __ptr = (undefined8 *)malloc(0x28);
    if (__ptr != (undefined8 *)0x0) {
      *__ptr = uVar10;
      lVar9 = __resolv_conf_get(uVar10);
      __ptr[2] = 1;
      __ptr[1] = lVar9;
      *(undefined1 *)(__ptr + 3) = 1;
      __ptr[4] = *(undefined8 *)(in_FS_OFFSET + -0x10);
      *(undefined8 **)(in_FS_OFFSET + -0x10) = __ptr;
      piVar4 = (int *)*__ptr;
      uVar5 = *(ulong *)(piVar4 + 2);
      if ((uVar5 & 1) == 0) {
        if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("ctx->conf == NULL","resolv_context.c",0x6e,"maybe_init");
        }
        if (*piVar4 == 0) {
          *piVar4 = 5;
        }
        if (piVar4[1] == 0) {
          piVar4[1] = 2;
        }
        piVar4[2] = 0x2c0;
        piVar4[3] = 0;
        if ((short)piVar4[0x11] == 0) {
          uVar7 = __res_randomid();
          *(undefined2 *)(piVar4 + 0x11) = uVar7;
        }
        iVar8 = __res_vinit(piVar4,1);
        if (-1 < iVar8) {
          uVar10 = __resolv_conf_get(*__ptr);
          __ptr[1] = uVar10;
          return __ptr;
        }
      }
      else {
        if (((((uVar5 & 0x2000000) != 0) || (lVar9 == 0)) || (uVar5 != *(uint *)(lVar9 + 0x38))) ||
           (((*piVar4 != *(int *)(lVar9 + 0x3c) || (piVar4[1] != *(int *)(lVar9 + 0x40))) ||
            ((*(byte *)(piVar4 + 0x62) & 0xf) != *(uint *)(lVar9 + 0x44))))) {
          return __ptr;
        }
        lVar9 = __resolv_conf_get_current();
        if (lVar9 != 0) {
          if (lVar9 == __ptr[1]) {
            __resolv_conf_put(lVar9);
            return __ptr;
          }
          if (0 < piVar4[4]) {
            __res_iclose(piVar4,1);
          }
          cVar6 = __resolv_conf_attach(*__ptr,lVar9);
          if (cVar6 == '\0') {
            return __ptr;
          }
          __resolv_conf_put(__ptr[1]);
          __ptr[1] = lVar9;
          return __ptr;
        }
      }
      *(undefined8 *)(in_FS_OFFSET + -0x10) = __ptr[4];
      uVar2 = *(undefined4 *)(in_FS_OFFSET + -0x58);
      __resolv_conf_put(__ptr[1]);
      free(__ptr);
      *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar2;
    }
  }
  else {
    if (*(char *)(puVar3 + 3) == '\0') {
                    /* WARNING: Subroutine does not return */
      __assert_fail("current->__from_res","resolv_context.c",0xa2,"context_reuse");
    }
    plVar1 = puVar3 + 2;
    *plVar1 = *plVar1 + 1;
    if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("current->__refcount > 0","resolv_context.c",0xa8,"context_reuse");
    }
  }
  return puVar3;
}

