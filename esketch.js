const esketch = require('./build/Debug/esketchnjs.node');

module.exports = esketch;
module.exports.getText = ( text ) => { return esketch._wrapper( 0, text ) };

