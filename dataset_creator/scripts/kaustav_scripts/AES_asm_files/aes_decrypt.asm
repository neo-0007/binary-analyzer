
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

00000000004057ac <aes_decrypt>:
  4057ac:	f3 0f 1e fa          	endbr64 
  4057b0:	55                   	push   %rbp
  4057b1:	48 89 e5             	mov    %rsp,%rbp
  4057b4:	48 83 ec 40          	sub    $0x40,%rsp
  4057b8:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
  4057bc:	48 89 75 d0          	mov    %rsi,-0x30(%rbp)
  4057c0:	48 89 55 c8          	mov    %rdx,-0x38(%rbp)
  4057c4:	89 4d c4             	mov    %ecx,-0x3c(%rbp)
  4057c7:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  4057ce:	00 00 
  4057d0:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  4057d4:	31 c0                	xor    %eax,%eax
  4057d6:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4057da:	0f b6 00             	movzbl (%rax),%eax
  4057dd:	88 45 e0             	mov    %al,-0x20(%rbp)
  4057e0:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4057e4:	48 83 c0 01          	add    $0x1,%rax
  4057e8:	0f b6 00             	movzbl (%rax),%eax
  4057eb:	88 45 e4             	mov    %al,-0x1c(%rbp)
  4057ee:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4057f2:	48 83 c0 02          	add    $0x2,%rax
  4057f6:	0f b6 00             	movzbl (%rax),%eax
  4057f9:	88 45 e8             	mov    %al,-0x18(%rbp)
  4057fc:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  405800:	48 83 c0 03          	add    $0x3,%rax
  405804:	0f b6 00             	movzbl (%rax),%eax
  405807:	88 45 ec             	mov    %al,-0x14(%rbp)
  40580a:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40580e:	48 83 c0 04          	add    $0x4,%rax
  405812:	0f b6 00             	movzbl (%rax),%eax
  405815:	88 45 e1             	mov    %al,-0x1f(%rbp)
  405818:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40581c:	48 83 c0 05          	add    $0x5,%rax
  405820:	0f b6 00             	movzbl (%rax),%eax
  405823:	88 45 e5             	mov    %al,-0x1b(%rbp)
  405826:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40582a:	48 83 c0 06          	add    $0x6,%rax
  40582e:	0f b6 00             	movzbl (%rax),%eax
  405831:	88 45 e9             	mov    %al,-0x17(%rbp)
  405834:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  405838:	48 83 c0 07          	add    $0x7,%rax
  40583c:	0f b6 00             	movzbl (%rax),%eax
  40583f:	88 45 ed             	mov    %al,-0x13(%rbp)
  405842:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  405846:	48 83 c0 08          	add    $0x8,%rax
  40584a:	0f b6 00             	movzbl (%rax),%eax
  40584d:	88 45 e2             	mov    %al,-0x1e(%rbp)
  405850:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  405854:	48 83 c0 09          	add    $0x9,%rax
  405858:	0f b6 00             	movzbl (%rax),%eax
  40585b:	88 45 e6             	mov    %al,-0x1a(%rbp)
  40585e:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  405862:	48 83 c0 0a          	add    $0xa,%rax
  405866:	0f b6 00             	movzbl (%rax),%eax
  405869:	88 45 ea             	mov    %al,-0x16(%rbp)
  40586c:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  405870:	48 83 c0 0b          	add    $0xb,%rax
  405874:	0f b6 00             	movzbl (%rax),%eax
  405877:	88 45 ee             	mov    %al,-0x12(%rbp)
  40587a:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40587e:	48 83 c0 0c          	add    $0xc,%rax
  405882:	0f b6 00             	movzbl (%rax),%eax
  405885:	88 45 e3             	mov    %al,-0x1d(%rbp)
  405888:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40588c:	48 83 c0 0d          	add    $0xd,%rax
  405890:	0f b6 00             	movzbl (%rax),%eax
  405893:	88 45 e7             	mov    %al,-0x19(%rbp)
  405896:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40589a:	48 83 c0 0e          	add    $0xe,%rax
  40589e:	0f b6 00             	movzbl (%rax),%eax
  4058a1:	88 45 eb             	mov    %al,-0x15(%rbp)
  4058a4:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4058a8:	48 83 c0 0f          	add    $0xf,%rax
  4058ac:	0f b6 00             	movzbl (%rax),%eax
  4058af:	88 45 ef             	mov    %al,-0x11(%rbp)
  4058b2:	81 7d c4 80 00 00 00 	cmpl   $0x80,-0x3c(%rbp)
  4058b9:	0f 8e 3d 01 00 00    	jle    4059fc <aes_decrypt+0x250>
  4058bf:	81 7d c4 c0 00 00 00 	cmpl   $0xc0,-0x3c(%rbp)
  4058c6:	0f 8e 98 00 00 00    	jle    405964 <aes_decrypt+0x1b8>
  4058cc:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  4058d0:	48 8d 90 e0 00 00 00 	lea    0xe0(%rax),%rdx
  4058d7:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4058db:	48 89 d6             	mov    %rdx,%rsi
  4058de:	48 89 c7             	mov    %rax,%rdi
  4058e1:	e8 db d0 ff ff       	call   4029c1 <AddRoundKey>
  4058e6:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4058ea:	48 89 c7             	mov    %rax,%rdi
  4058ed:	e8 bc dd ff ff       	call   4036ae <InvShiftRows>
  4058f2:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4058f6:	48 89 c7             	mov    %rax,%rdi
  4058f9:	e8 fc d7 ff ff       	call   4030fa <InvSubBytes>
  4058fe:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405902:	48 8d 90 d0 00 00 00 	lea    0xd0(%rax),%rdx
  405909:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40590d:	48 89 d6             	mov    %rdx,%rsi
  405910:	48 89 c7             	mov    %rax,%rdi
  405913:	e8 a9 d0 ff ff       	call   4029c1 <AddRoundKey>
  405918:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40591c:	48 89 c7             	mov    %rax,%rdi
  40591f:	e8 b9 e9 ff ff       	call   4042dd <InvMixColumns>
  405924:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405928:	48 89 c7             	mov    %rax,%rdi
  40592b:	e8 7e dd ff ff       	call   4036ae <InvShiftRows>
  405930:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405934:	48 89 c7             	mov    %rax,%rdi
  405937:	e8 be d7 ff ff       	call   4030fa <InvSubBytes>
  40593c:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405940:	48 8d 90 c0 00 00 00 	lea    0xc0(%rax),%rdx
  405947:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40594b:	48 89 d6             	mov    %rdx,%rsi
  40594e:	48 89 c7             	mov    %rax,%rdi
  405951:	e8 6b d0 ff ff       	call   4029c1 <AddRoundKey>
  405956:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40595a:	48 89 c7             	mov    %rax,%rdi
  40595d:	e8 7b e9 ff ff       	call   4042dd <InvMixColumns>
  405962:	eb 1a                	jmp    40597e <aes_decrypt+0x1d2>
  405964:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405968:	48 8d 90 c0 00 00 00 	lea    0xc0(%rax),%rdx
  40596f:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405973:	48 89 d6             	mov    %rdx,%rsi
  405976:	48 89 c7             	mov    %rax,%rdi
  405979:	e8 43 d0 ff ff       	call   4029c1 <AddRoundKey>
  40597e:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405982:	48 89 c7             	mov    %rax,%rdi
  405985:	e8 24 dd ff ff       	call   4036ae <InvShiftRows>
  40598a:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40598e:	48 89 c7             	mov    %rax,%rdi
  405991:	e8 64 d7 ff ff       	call   4030fa <InvSubBytes>
  405996:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  40599a:	48 8d 90 b0 00 00 00 	lea    0xb0(%rax),%rdx
  4059a1:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4059a5:	48 89 d6             	mov    %rdx,%rsi
  4059a8:	48 89 c7             	mov    %rax,%rdi
  4059ab:	e8 11 d0 ff ff       	call   4029c1 <AddRoundKey>
  4059b0:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4059b4:	48 89 c7             	mov    %rax,%rdi
  4059b7:	e8 21 e9 ff ff       	call   4042dd <InvMixColumns>
  4059bc:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4059c0:	48 89 c7             	mov    %rax,%rdi
  4059c3:	e8 e6 dc ff ff       	call   4036ae <InvShiftRows>
  4059c8:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4059cc:	48 89 c7             	mov    %rax,%rdi
  4059cf:	e8 26 d7 ff ff       	call   4030fa <InvSubBytes>
  4059d4:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  4059d8:	48 8d 90 a0 00 00 00 	lea    0xa0(%rax),%rdx
  4059df:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4059e3:	48 89 d6             	mov    %rdx,%rsi
  4059e6:	48 89 c7             	mov    %rax,%rdi
  4059e9:	e8 d3 cf ff ff       	call   4029c1 <AddRoundKey>
  4059ee:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4059f2:	48 89 c7             	mov    %rax,%rdi
  4059f5:	e8 e3 e8 ff ff       	call   4042dd <InvMixColumns>
  4059fa:	eb 1a                	jmp    405a16 <aes_decrypt+0x26a>
  4059fc:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405a00:	48 8d 90 a0 00 00 00 	lea    0xa0(%rax),%rdx
  405a07:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405a0b:	48 89 d6             	mov    %rdx,%rsi
  405a0e:	48 89 c7             	mov    %rax,%rdi
  405a11:	e8 ab cf ff ff       	call   4029c1 <AddRoundKey>
  405a16:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405a1a:	48 89 c7             	mov    %rax,%rdi
  405a1d:	e8 8c dc ff ff       	call   4036ae <InvShiftRows>
  405a22:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405a26:	48 89 c7             	mov    %rax,%rdi
  405a29:	e8 cc d6 ff ff       	call   4030fa <InvSubBytes>
  405a2e:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405a32:	48 8d 90 90 00 00 00 	lea    0x90(%rax),%rdx
  405a39:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405a3d:	48 89 d6             	mov    %rdx,%rsi
  405a40:	48 89 c7             	mov    %rax,%rdi
  405a43:	e8 79 cf ff ff       	call   4029c1 <AddRoundKey>
  405a48:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405a4c:	48 89 c7             	mov    %rax,%rdi
  405a4f:	e8 89 e8 ff ff       	call   4042dd <InvMixColumns>
  405a54:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405a58:	48 89 c7             	mov    %rax,%rdi
  405a5b:	e8 4e dc ff ff       	call   4036ae <InvShiftRows>
  405a60:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405a64:	48 89 c7             	mov    %rax,%rdi
  405a67:	e8 8e d6 ff ff       	call   4030fa <InvSubBytes>
  405a6c:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405a70:	48 8d 90 80 00 00 00 	lea    0x80(%rax),%rdx
  405a77:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405a7b:	48 89 d6             	mov    %rdx,%rsi
  405a7e:	48 89 c7             	mov    %rax,%rdi
  405a81:	e8 3b cf ff ff       	call   4029c1 <AddRoundKey>
  405a86:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405a8a:	48 89 c7             	mov    %rax,%rdi
  405a8d:	e8 4b e8 ff ff       	call   4042dd <InvMixColumns>
  405a92:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405a96:	48 89 c7             	mov    %rax,%rdi
  405a99:	e8 10 dc ff ff       	call   4036ae <InvShiftRows>
  405a9e:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405aa2:	48 89 c7             	mov    %rax,%rdi
  405aa5:	e8 50 d6 ff ff       	call   4030fa <InvSubBytes>
  405aaa:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405aae:	48 8d 50 70          	lea    0x70(%rax),%rdx
  405ab2:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405ab6:	48 89 d6             	mov    %rdx,%rsi
  405ab9:	48 89 c7             	mov    %rax,%rdi
  405abc:	e8 00 cf ff ff       	call   4029c1 <AddRoundKey>
  405ac1:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405ac5:	48 89 c7             	mov    %rax,%rdi
  405ac8:	e8 10 e8 ff ff       	call   4042dd <InvMixColumns>
  405acd:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405ad1:	48 89 c7             	mov    %rax,%rdi
  405ad4:	e8 d5 db ff ff       	call   4036ae <InvShiftRows>
  405ad9:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405add:	48 89 c7             	mov    %rax,%rdi
  405ae0:	e8 15 d6 ff ff       	call   4030fa <InvSubBytes>
  405ae5:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405ae9:	48 8d 50 60          	lea    0x60(%rax),%rdx
  405aed:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405af1:	48 89 d6             	mov    %rdx,%rsi
  405af4:	48 89 c7             	mov    %rax,%rdi
  405af7:	e8 c5 ce ff ff       	call   4029c1 <AddRoundKey>
  405afc:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405b00:	48 89 c7             	mov    %rax,%rdi
  405b03:	e8 d5 e7 ff ff       	call   4042dd <InvMixColumns>
  405b08:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405b0c:	48 89 c7             	mov    %rax,%rdi
  405b0f:	e8 9a db ff ff       	call   4036ae <InvShiftRows>
  405b14:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405b18:	48 89 c7             	mov    %rax,%rdi
  405b1b:	e8 da d5 ff ff       	call   4030fa <InvSubBytes>
  405b20:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405b24:	48 8d 50 50          	lea    0x50(%rax),%rdx
  405b28:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405b2c:	48 89 d6             	mov    %rdx,%rsi
  405b2f:	48 89 c7             	mov    %rax,%rdi
  405b32:	e8 8a ce ff ff       	call   4029c1 <AddRoundKey>
  405b37:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405b3b:	48 89 c7             	mov    %rax,%rdi
  405b3e:	e8 9a e7 ff ff       	call   4042dd <InvMixColumns>
  405b43:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405b47:	48 89 c7             	mov    %rax,%rdi
  405b4a:	e8 5f db ff ff       	call   4036ae <InvShiftRows>
  405b4f:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405b53:	48 89 c7             	mov    %rax,%rdi
  405b56:	e8 9f d5 ff ff       	call   4030fa <InvSubBytes>
  405b5b:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405b5f:	48 8d 50 40          	lea    0x40(%rax),%rdx
  405b63:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405b67:	48 89 d6             	mov    %rdx,%rsi
  405b6a:	48 89 c7             	mov    %rax,%rdi
  405b6d:	e8 4f ce ff ff       	call   4029c1 <AddRoundKey>
  405b72:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405b76:	48 89 c7             	mov    %rax,%rdi
  405b79:	e8 5f e7 ff ff       	call   4042dd <InvMixColumns>
  405b7e:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405b82:	48 89 c7             	mov    %rax,%rdi
  405b85:	e8 24 db ff ff       	call   4036ae <InvShiftRows>
  405b8a:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405b8e:	48 89 c7             	mov    %rax,%rdi
  405b91:	e8 64 d5 ff ff       	call   4030fa <InvSubBytes>
  405b96:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405b9a:	48 8d 50 30          	lea    0x30(%rax),%rdx
  405b9e:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405ba2:	48 89 d6             	mov    %rdx,%rsi
  405ba5:	48 89 c7             	mov    %rax,%rdi
  405ba8:	e8 14 ce ff ff       	call   4029c1 <AddRoundKey>
  405bad:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405bb1:	48 89 c7             	mov    %rax,%rdi
  405bb4:	e8 24 e7 ff ff       	call   4042dd <InvMixColumns>
  405bb9:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405bbd:	48 89 c7             	mov    %rax,%rdi
  405bc0:	e8 e9 da ff ff       	call   4036ae <InvShiftRows>
  405bc5:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405bc9:	48 89 c7             	mov    %rax,%rdi
  405bcc:	e8 29 d5 ff ff       	call   4030fa <InvSubBytes>
  405bd1:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405bd5:	48 8d 50 20          	lea    0x20(%rax),%rdx
  405bd9:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405bdd:	48 89 d6             	mov    %rdx,%rsi
  405be0:	48 89 c7             	mov    %rax,%rdi
  405be3:	e8 d9 cd ff ff       	call   4029c1 <AddRoundKey>
  405be8:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405bec:	48 89 c7             	mov    %rax,%rdi
  405bef:	e8 e9 e6 ff ff       	call   4042dd <InvMixColumns>
  405bf4:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405bf8:	48 89 c7             	mov    %rax,%rdi
  405bfb:	e8 ae da ff ff       	call   4036ae <InvShiftRows>
  405c00:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405c04:	48 89 c7             	mov    %rax,%rdi
  405c07:	e8 ee d4 ff ff       	call   4030fa <InvSubBytes>
  405c0c:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405c10:	48 8d 50 10          	lea    0x10(%rax),%rdx
  405c14:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405c18:	48 89 d6             	mov    %rdx,%rsi
  405c1b:	48 89 c7             	mov    %rax,%rdi
  405c1e:	e8 9e cd ff ff       	call   4029c1 <AddRoundKey>
  405c23:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405c27:	48 89 c7             	mov    %rax,%rdi
  405c2a:	e8 ae e6 ff ff       	call   4042dd <InvMixColumns>
  405c2f:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405c33:	48 89 c7             	mov    %rax,%rdi
  405c36:	e8 73 da ff ff       	call   4036ae <InvShiftRows>
  405c3b:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405c3f:	48 89 c7             	mov    %rax,%rdi
  405c42:	e8 b3 d4 ff ff       	call   4030fa <InvSubBytes>
  405c47:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
  405c4b:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405c4f:	48 89 d6             	mov    %rdx,%rsi
  405c52:	48 89 c7             	mov    %rax,%rdi
  405c55:	e8 67 cd ff ff       	call   4029c1 <AddRoundKey>
  405c5a:	0f b6 55 e0          	movzbl -0x20(%rbp),%edx
  405c5e:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405c62:	88 10                	mov    %dl,(%rax)
  405c64:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405c68:	48 8d 50 01          	lea    0x1(%rax),%rdx
  405c6c:	0f b6 45 e4          	movzbl -0x1c(%rbp),%eax
  405c70:	88 02                	mov    %al,(%rdx)
  405c72:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405c76:	48 8d 50 02          	lea    0x2(%rax),%rdx
  405c7a:	0f b6 45 e8          	movzbl -0x18(%rbp),%eax
  405c7e:	88 02                	mov    %al,(%rdx)
  405c80:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405c84:	48 8d 50 03          	lea    0x3(%rax),%rdx
  405c88:	0f b6 45 ec          	movzbl -0x14(%rbp),%eax
  405c8c:	88 02                	mov    %al,(%rdx)
  405c8e:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405c92:	48 8d 50 04          	lea    0x4(%rax),%rdx
  405c96:	0f b6 45 e1          	movzbl -0x1f(%rbp),%eax
  405c9a:	88 02                	mov    %al,(%rdx)
  405c9c:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405ca0:	48 8d 50 05          	lea    0x5(%rax),%rdx
  405ca4:	0f b6 45 e5          	movzbl -0x1b(%rbp),%eax
  405ca8:	88 02                	mov    %al,(%rdx)
  405caa:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405cae:	48 8d 50 06          	lea    0x6(%rax),%rdx
  405cb2:	0f b6 45 e9          	movzbl -0x17(%rbp),%eax
  405cb6:	88 02                	mov    %al,(%rdx)
  405cb8:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405cbc:	48 8d 50 07          	lea    0x7(%rax),%rdx
  405cc0:	0f b6 45 ed          	movzbl -0x13(%rbp),%eax
  405cc4:	88 02                	mov    %al,(%rdx)
  405cc6:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405cca:	48 8d 50 08          	lea    0x8(%rax),%rdx
  405cce:	0f b6 45 e2          	movzbl -0x1e(%rbp),%eax
  405cd2:	88 02                	mov    %al,(%rdx)
  405cd4:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405cd8:	48 8d 50 09          	lea    0x9(%rax),%rdx
  405cdc:	0f b6 45 e6          	movzbl -0x1a(%rbp),%eax
  405ce0:	88 02                	mov    %al,(%rdx)
  405ce2:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405ce6:	48 8d 50 0a          	lea    0xa(%rax),%rdx
  405cea:	0f b6 45 ea          	movzbl -0x16(%rbp),%eax
  405cee:	88 02                	mov    %al,(%rdx)
  405cf0:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405cf4:	48 8d 50 0b          	lea    0xb(%rax),%rdx
  405cf8:	0f b6 45 ee          	movzbl -0x12(%rbp),%eax
  405cfc:	88 02                	mov    %al,(%rdx)
  405cfe:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405d02:	48 8d 50 0c          	lea    0xc(%rax),%rdx
  405d06:	0f b6 45 e3          	movzbl -0x1d(%rbp),%eax
  405d0a:	88 02                	mov    %al,(%rdx)
  405d0c:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405d10:	48 8d 50 0d          	lea    0xd(%rax),%rdx
  405d14:	0f b6 45 e7          	movzbl -0x19(%rbp),%eax
  405d18:	88 02                	mov    %al,(%rdx)
  405d1a:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405d1e:	48 8d 50 0e          	lea    0xe(%rax),%rdx
  405d22:	0f b6 45 eb          	movzbl -0x15(%rbp),%eax
  405d26:	88 02                	mov    %al,(%rdx)
  405d28:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405d2c:	48 8d 50 0f          	lea    0xf(%rax),%rdx
  405d30:	0f b6 45 ef          	movzbl -0x11(%rbp),%eax
  405d34:	88 02                	mov    %al,(%rdx)
  405d36:	90                   	nop
  405d37:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  405d3b:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
  405d42:	00 00 
  405d44:	74 05                	je     405d4b <aes_decrypt+0x59f>
  405d46:	e8 25 84 04 00       	call   44e170 <__stack_chk_fail>
  405d4b:	c9                   	leave  
  405d4c:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
