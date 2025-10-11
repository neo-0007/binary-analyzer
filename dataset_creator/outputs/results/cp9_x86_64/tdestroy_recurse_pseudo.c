
void tdestroy_recurse(undefined8 *param_1,code *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(param_1[1] & 0xfffffffffffffffe);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[2];
  }
  else {
    puVar2 = (undefined8 *)(puVar1[1] & 0xfffffffffffffffe);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)puVar1[2];
    }
    else {
      if ((puVar2[1] & 0xfffffffffffffffe) != 0) {
        tdestroy_recurse();
      }
      if (puVar2[2] != 0) {
        tdestroy_recurse(puVar2[2],param_2);
      }
      (*param_2)(*puVar2);
      free(puVar2);
      puVar2 = (undefined8 *)puVar1[2];
    }
    if (puVar2 != (undefined8 *)0x0) {
      if ((puVar2[1] & 0xfffffffffffffffe) != 0) {
        tdestroy_recurse(puVar2[1] & 0xfffffffffffffffe,param_2);
      }
      if (puVar2[2] != 0) {
        tdestroy_recurse(puVar2[2],param_2);
      }
      (*param_2)(*puVar2);
      free(puVar2);
    }
    (*param_2)(*puVar1);
    free(puVar1);
    puVar1 = (undefined8 *)param_1[2];
  }
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)(puVar1[1] & 0xfffffffffffffffe);
    if (puVar2 != (undefined8 *)0x0) {
      if ((puVar2[1] & 0xfffffffffffffffe) != 0) {
        tdestroy_recurse(puVar2[1] & 0xfffffffffffffffe,param_2);
      }
      if (puVar2[2] != 0) {
        tdestroy_recurse(puVar2[2],param_2);
      }
      (*param_2)(*puVar2);
      free(puVar2);
    }
    puVar2 = (undefined8 *)puVar1[2];
    if (puVar2 != (undefined8 *)0x0) {
      if ((puVar2[1] & 0xfffffffffffffffe) != 0) {
        tdestroy_recurse(puVar2[1] & 0xfffffffffffffffe,param_2);
      }
      if (puVar2[2] != 0) {
        tdestroy_recurse(puVar2[2],param_2);
      }
      (*param_2)(*puVar2);
      free(puVar2);
    }
    (*param_2)(*puVar1);
    free(puVar1);
  }
  (*param_2)(*param_1);
  free(param_1);
  return;
}

