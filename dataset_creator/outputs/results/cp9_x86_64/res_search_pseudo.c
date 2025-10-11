
undefined4
res_search(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5)

{
  undefined4 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  lVar2 = __resolv_context_get();
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
    *(undefined4 *)(*(long *)(in_FS_OFFSET + -0x70) + 0x1f0) = 0xffffffff;
    *(undefined4 *)(in_FS_OFFSET + -0x18) = 0xffffffff;
  }
  else {
    uVar1 = __res_context_search(lVar2,param_1,param_2,param_3,param_4,param_5,0,0,0,0,0);
    __resolv_context_put(lVar2);
  }
  return uVar1;
}

