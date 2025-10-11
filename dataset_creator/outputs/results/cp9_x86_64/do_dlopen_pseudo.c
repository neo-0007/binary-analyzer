
undefined1  [16] do_dlopen(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_10;
  
  uVar2 = environ;
  uVar3 = _dl_open(*param_1,*(undefined4 *)(param_1 + 1),param_1[2],0xfffffffffffffffe,__libc_argc,
                   __libc_argv);
  param_1[3] = uVar3;
  auVar1._8_8_ = uStack_10;
  auVar1._0_8_ = uVar2;
  return auVar1;
}

