import React from 'react'
import img1 from '../../assets/img/01web.png'
import img2 from '../../assets/img/02web.png'
import img3 from '../../assets/img/03web.png'

function BottomImg() {
    return (
        <div>
            <div className="container">
                <div className="main">
                    <div className="col s4 m4 l4">
                        <div className="im">
                            <img src={img1} alt="" />
                        </div>
                    </div>
                    <div className="col s4 m4 l4">
                        <div className="im">
                            <img src={img2} alt="" />
                        </div>
                    </div>
                    <div className="col s4 m4 l4">
                        <div className="im">
                            <img src={img3} alt="" />
                        </div>
                    </div>
                </div>
            </div>
        </div>
    )
}

export default BottomImg
