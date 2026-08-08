const fs = require('fs');
const ttf2woff2 = require('@0x6b/ttf2woff2-wasm');

console.log('正在读取 TTF 文件...');
const input = fs.readFileSync('LXGWWenKai-Regular.ttf');
console.log('TTF 文件大小:', (input.length / 1024 / 1024).toFixed(2), 'MB');

console.log('正在压缩为 WOFF2...');
const output = ttf2woff2(input);
console.log('WOFF2 输出大小:', (output.length / 1024 / 1024).toFixed(2), 'MB');

fs.writeFileSync('LXGWWenKai-Regular.woff2', output);
console.log('✅ 转换完成！');